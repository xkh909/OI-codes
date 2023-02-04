#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e6 + 5;

int n, m, k, ans;
bool vis[N];

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m >> k;
    int d = gcd(n, k);

    for (int i = 1; i <= m; ++ i) {
        int x;
        cin >> x;
        vis[x % d] = true;
    }

    for (int i = 0; i < d; ++ i)
        if (!vis[i]) ans += n / d;
    
    cout << ans << endl;

    return 0;
}