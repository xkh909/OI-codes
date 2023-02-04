#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

long long n;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;
    cout << floor(cbrt(n)) << endl;

    return 0;
}