#include <bits/stdc++.h>

#define ll long long

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 3e6 + 5;

int n, p;
ll inv[N];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> p;
    inv[1] = 1;
    cout << 1 << endl;
    for (int i = 2; i <= n; ++ i) {
        inv[i] = (ll)p - (p / i) * inv[p % i] % p;
        cout << inv[i] << endl;
    }

    return 0;
}