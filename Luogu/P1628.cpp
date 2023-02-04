#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e5 + 5;

int n;
std::string a[N], t;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++ i) cin >> a[i];
    cin >> t;

    std::sort(a + 1, a + n + 1);

    for (int i = 1; i <= n; ++ i)
        if (a[i].find(t) == 0) cout << a[i] << endl;

    return 0;
}