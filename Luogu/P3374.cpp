#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 5e5 + 5;

int n, m;
int c[N];

int lowbit(int x) {
    return x & -x;
}
void add(int x, int k) {
    for(; x <= n; x += lowbit(x))
        c[x] += k;
}
int sum(int x) {
    int res = 0;
    for(; x; x -= lowbit(x))
        res += c[x];
    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    
    for (int i = 1, x; i <= n; ++ i) {
        cin >> x;
        add(i, x);
    }
    while (m --) {
        int op;
        cin >> op;

        if (op == 1) {
            int x, k;
            cin >> x >> k;
            add(x, k);
        }
        else {
            int x, y;
            cin >> x >> y;
            cout << sum(y) - sum(x - 1) << endl;
        }
    }

    return 0;
}