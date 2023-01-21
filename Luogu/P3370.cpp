#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int n;

std::set<std::string> s;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    
    cin >> n;
    while ( n -- ) {
        std::string st;
        cin >> st;
        s.insert(st);
    }

    cout << s.size() << endl;

    return 0;
}