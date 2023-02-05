#include <bits/stdc++.h>

using std::cin;
using std::cout;
const char endl = '\n';

const int N = 1e6 + 5;

int n;
int kmp[N];
std::string s;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    
    cin >> n >> s;
    s = ' ' + s;

    for (int i = 2, j = 0; i <= n; ++ i) {
        while (j && s[i] != s[j + 1]) j = kmp[j];
        if (s[j + 1] == s[i]) ++ j;
        kmp[i] = j;
    }

    cout << n - kmp[n] << endl;

    return 0;
}