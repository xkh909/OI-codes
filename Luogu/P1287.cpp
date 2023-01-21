#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int n, r;

int f(int n, int m) {
    if (m <= 0 || n < m) return 0;
    if (n == m) return 1;
    return f(n - 1, m - 1) + f(n - 1, m) * m;
}

int fac(int x) {
    return x == 1 ? 1 : x * fac(x - 1);
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> r;

    cout << f(n, r) * fac(r) << endl;

    return 0;
}