#include <bits/stdc++.h>

#define ll long long

using std::cin;
using std::cout;

const char endl = '\n';

ll n, m, a;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    
    cin >> n >> m >> a;

    n = ceil(n / static_cast<double>(a));
    m = ceil(m / static_cast<double>(a));

    cout << n * m << endl;

    return 0;
}