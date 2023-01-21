#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int mx, d;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    for (int i = 1; i <= 7; ++ i) {
        int x, y;
        cin >> x >> y;
        if (x + y > mx && x + y > 8) {
            mx = x + y;
            d = i;
        }
    }

    cout << d << endl;

    return 0;
}