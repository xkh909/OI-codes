#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

std::string s;
int ans;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    
    std::getline(std::cin, s);

    for (auto i : s) {
        if (i != ' ') ++ ans;
    }

    cout << ans << endl;
    
    return 0;
}