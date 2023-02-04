#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int n, ans;
char now, last;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;
    while (n --) {
        cin >> now;
        if (now == last) continue;
        ++ ans;
        last = now;
    }

    cout << ++ ans << endl;

    return 0;
}