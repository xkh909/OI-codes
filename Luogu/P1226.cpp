#include <bits/stdc++.h>

#define ll long long

using std::cin;
using std::cout;

const char endl = '\n';

ll a, b, p;

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

    cin >> a >> b >> p;
    cout << a << '^' << b << " mod " << p << '=' << ksm(a, b) << endl;

    return 0;
}