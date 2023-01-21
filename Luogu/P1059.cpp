#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int n;
std::set<int>s;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    
    cin >> n;
    for (int i = 1; i <= n; ++ i) {
        int x;
        cin >> x;
        s.insert(x);
    }
    
    cout << s.size() << endl;
    
    for (auto i : s) {
        cout << i << ' ';
    }
    
    return 0;
}