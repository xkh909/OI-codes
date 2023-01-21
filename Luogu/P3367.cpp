#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e4 + 5;

int n, m;
int f[N];

int find(int x) {
    return f[x] == x ? x : f[x] = find(f[x]);
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; ++ i) f[i] = i;

    while (m -- ) {
        int op, x, y;
        cin >> op >> x >> y;
        x = find(x), y = find(y);

        if (op == 1) {
            f[x] = y;
        } else {
            cout << (x == y ? "Y" : "N") << endl;
        }
    }
    
    return 0;
}