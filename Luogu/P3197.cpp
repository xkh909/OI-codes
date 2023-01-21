#include <bits/stdc++.h>

#define ll long long

using std::cin;
using std::cout;

const char endl = '\n';

const ll p = 100003;

ll m, n;

ll ksm(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % p;
        a = a * a % p;
        b >>= 1;
    }
    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> m >> n;

    int ans = ksm(m, n) - (m % p) * ksm(m - 1, n - 1) % p;
    
    while (ans < 0) ans += p;

    cout << ans % p << endl;

    return 0;
}