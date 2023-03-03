#include <bits/stdc++.h>

using std::cin;
using std::cout;
const char endl = '\n';

const int N = 1e3 + 5;

struct node {
    int x, y;
} a[N];

int n, m, op, ans, b[N];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= m; ++ i) {
        for (int j = 1; j <= n; ++ j) {
            cin >> op;
            if (op == 1) ++ a[j].x;
            else ++ a[j].y;
        }
    }

    for (int i = 1; i <= n; ++ i) cin >> b[i];

    for (int i = 1; i <= n; ++ i) {
        if (a[i].x > a[i].y && b[i] == 1) ++ ans;
        else if (a[i].x < a[i].y && b[i] == 0) ++ ans;
    }

    cout << ans << endl;

    return 0;
}