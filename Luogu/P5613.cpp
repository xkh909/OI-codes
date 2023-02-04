#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int K = 10 + 5;

int n, m, k, s, ans;
int a[K];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m >> k;
    for (int i = 1; i <= k; ++ i) cin >> a[i];

    while (s < n) {
        for (int i = 1; i <= k; ++ i) {
            if (a[i] == s) ++ m;
        }
        s += m;
        ++ ans;
    }

    cout << ans << endl;

    return 0;
}