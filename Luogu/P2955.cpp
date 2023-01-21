#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int T;

std::string s;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> T;
    while (T --) {
        cin >> s;
        cout << (s[s.size() - 1] & 1 ? "odd" : "even") << endl;
    }

    return 0;
}