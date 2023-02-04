#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e5 + 5;

inline int max(int a, int b) {return a > b ? a : b;}

int n, m;
int logn[N], f[N][21 + 5];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; ++ i) cin >> f[i][0];

    logn[1] = 0, logn[2] = 1;

    for (int i = 3; i <= n; ++ i) logn[i] = logn[i >> 1] + 1;

    for (int j = 1; j <= 21; ++ j) {
        for (int i = 1; i + (1 << j) - 1 <= n; ++ i) {
            f[i][j] = max(f[i][j - 1], f[i + (1 << j - 1)][j - 1]);
        }
    }

    while (m --) {
        int l, r;
        cin >> l >> r;
        int lg = logn[r - l + 1];

        cout << max(f[l][lg], f[r - (1 << lg) + 1][lg]) << endl;
    }

    return 0;
}