#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e6 + 5;

std::string a, b;

int la, lb;
int kmp[N];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> a >> b;
    la = a.size(), lb = b.size();
    a = ' ' + a, b = ' ' + b;

    for (int i = 2, j = 0; i <= lb; ++ i) {
        while (j && b[i] != b[j + 1]) j = kmp[j];
        if (b[j + 1] == b[i]) ++ j;
        kmp[i] = j;
    }

    for (int i = 1, j = 0; i <= la; ++ i) {
        while (j && b[j + 1] != a[i]) j = kmp[j];
        if (b[j + 1] == a[i]) ++ j;
        if (j == lb) {
            cout << i - lb + 1 << endl;
            j = kmp[j];
        }
    }

    for (int i = 1; i <= lb; ++ i) cout << kmp[i] << ' ';
    cout << endl;

    return 0;
}