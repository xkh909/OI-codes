#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e6 + 5, M = 2e3 + 5;

int n, m;
int l = 1;
int min = 2e9, ll, rr;
int cnt;
int a[N];
int pos[M];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; ++ i) {
        cin >> a[i];
        if (pos[a[i]] == 0) ++ cnt;
        pos[a[i]] = i;
        while (l != i && l < pos[a[l]]) ++ l;
        if (cnt == m && i - l + 1 < min) {
            min = i - l + 1;
            ll = l, rr = i;
        }
    }

    cout << ll << ' ' << rr << endl;

    return 0;
}