#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int n;
bool a, b;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;

    a = !(n & 1), b = (n >= 4 && n <= 12);

    cout << (a && b) << ' ' << (a || b) << ' ' << ((a && !b) || (!a && b)) << ' ' << (!a && !b) << endl;

    return 0;
}