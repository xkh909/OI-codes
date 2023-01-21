#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 5e6 + 5;

int n, k;
int a[N];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; ++ i) cin >> a[i];

    std::sort(a + 1, a + n + 1);

    cout << a[k + 1] << endl;

    return 0;
}