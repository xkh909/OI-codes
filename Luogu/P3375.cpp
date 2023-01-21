#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e6 + 5;

int la, lb;

int kmp[N];

std::string a, b;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> a >> b, a = ' ' + a, b = ' ' + b;
    la = a.size() - 1, lb = b.size() - 1;

    for (int i = 2, j = 0; i <= lb; ++ i) {
        while (j > 0 && b[i] != b[j + 1]) j = kmp[j];
        if (b[i] == b[j + 1]) ++ j;
        kmp[i] = j;
    }

    for (int i = 1, j = 0; i <= la; ++ i) {
        while (j > 0 && a[i] != b[j + 1]) j = kmp[j];
        if (a[i] == b[j + 1]) ++ j;
        if (j == lb) {
            cout << i - lb + 1 << endl;
            j = kmp[j];
        }
    }

    for (int i = 1; i <= lb; ++ i) cout << kmp[i] << ' ';

    return 0;
}