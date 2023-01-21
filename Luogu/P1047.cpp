#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e4 + 5;

int l, m, ans;
bool st[N];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> l >> m;

    for (int i = 1; i <= m; ++ i) {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; ++ j) {
            st[j] = true;
        }
    }

    for (int i = 0; i <= l; ++ i) {
        if (!st[i]) ++ ans;
    }

    cout << ans << endl;

    return 0;
}