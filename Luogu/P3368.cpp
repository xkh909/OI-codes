#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 5e5 + 5;

int n, m;
int c[N];

inline int lowbit(int x) {
    return x & -x;
}

inline void add(int x, int k) {
    for (; x <= n; x += lowbit(x)) c[x] += k;
}

inline int query(int x) {
    int res = 0;
    for (; x; x -= lowbit(x)) res += c[x];
    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1, x, lst = 0; i <= n; ++ i) {
        cin >> x;
        add(i, x - lst);
        lst = x;
    }

    while (m -- ) {
        int op;
        cin >> op;

        if (op == 1) {
            int x, y, k;
            cin >> x >> y >> k;

            add(x, k);
            add(y + 1, -k);
        } else {
            int x;
            cin >> x;
            cout << query(x) << endl;
        }
    }

    return 0;
}