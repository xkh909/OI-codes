#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e6 + 5;

int n, ans;
int a[N];

std::unordered_map<int, int> mp;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++ i) cin >> a[i];

    for (int i = 1; i <= n; ++ i) {
        if (mp[a[i]] > 0) -- mp[a[i]], ++ mp[a[i] - 1];
        else ++ ans, ++ mp[a[i] - 1];
    }

    cout << ans << endl;

    return 0;
}