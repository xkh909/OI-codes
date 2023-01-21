#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int n;
bool flag;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;

    if (n % 400 == 0) flag = 1;
    else if (n % 4 == 0 && !(n % 100 == 0)) flag = 1;

    cout << flag << endl;

    return 0;
}