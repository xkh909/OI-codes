#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int m, s, t, run, shan;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> m >> s >> t;

    // while (t --) {
    for (int i = 1; i <= t; ++ i) {
        run += 17;

        if (m >= 10) {
            shan += 60;
            m -= 10;
        } else m += 4;

        if (shan > run) run = shan;

        if (run > s) {
            cout << "Yes" << endl;
            cout << i << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    cout << run << endl;

    return 0;
}