#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int n, m;
std::unordered_map<std::string, int> mp;

std::string s;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++ i) {
        cin >> s;
        mp[s] = 1;
    }

    cin >> m;
    while (m --) {
        cin >> s;
        if (mp[s] == 1) {
            cout << "OK" << endl;
            mp[s] = -1;
        }
        else if (mp[s] == -1) cout << "REPEAT" << endl;
        else cout << "WRONG" << endl;
    }
    
    return 0;
}