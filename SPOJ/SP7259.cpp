#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e5 + 5;

int n, m;
bool a[N];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    while (m --) {
        int op;
        cin >> op;

        if (op == 0) {
            int l, r;
            cin >> l >> r;
            for (int i = l; i <= r; ++ i) a[i] = !a[i];
        } else {
            int l, r;
            cin >> l >> r;

            int ans = 0;
            for (int i = l; i <= r; ++ i) ans += a[i];
            cout << ans << endl;
        }
    }

    return 0;
}