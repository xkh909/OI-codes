#include <bits/stdc++.h>

using std::cin;
using std::cout;
const char endl = '\n';

int a, b, c;
int t[105];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> a >> b >> c;

    ++ t[a], ++ t[b], ++ t[c];

    for (int i = 1; i <= 100; ++ i) {
        while (t[i] --) cout << i << ' ';
    }

    cout << endl;

    return 0;
}