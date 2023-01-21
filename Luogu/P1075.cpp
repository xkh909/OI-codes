#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int n;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;
    for (int i = 2; i * i  <= n; ++ i) {
        if (n % i == 0) {
            cout << n / i << endl;
            return 0;
        }
    }

    return 0;
}