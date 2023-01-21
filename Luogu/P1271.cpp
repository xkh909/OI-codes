#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int M = 2e6 + 5;

int n, m;
int a[M];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= m; ++ i) cin >> a[i];

    std::sort(a + 1, a + m + 1);

    for (int i = 1; i <= m; ++ i) cout << a[i] << ' ';

    return 0;
}