#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int n;
char ch;

std::set<int> s;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;

    while (n --) {
        cin >> ch;
        s.insert(tolower(ch));
    }

    if (s.size() == 26) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}