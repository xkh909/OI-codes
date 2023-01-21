#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int n, ans = 1;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i < n; ++ i) {
        ++ ans;
        ans <<= 1;
    }

    cout << ans << endl;

    return 0;
}