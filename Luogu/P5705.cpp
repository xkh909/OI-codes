#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

std::string s;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> s;
    
    std::reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}