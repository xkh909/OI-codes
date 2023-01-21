#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1005;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int n, m;
int d[N][N];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; ++ i) cin >> d[i][i];
    for (int i = n - 1; i >= 1; -- i)
        for (int j = i + 1; j <= n; ++ j)
            d[i][j] = gcd(d[i][i], d[i+1][j]);
    while (m -- ) {
        int l, r;
        cin >> l >> r;
        cout << d[l][r] << endl;
    }

    return 0;
}