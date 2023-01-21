#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

char ch;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    
    cin >> ch;
    cout << static_cast<char>(toupper(ch)) << endl;
    
    return 0;
}