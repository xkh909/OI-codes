#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e6 + 5;

struct node {
    int x, y, e;
} a[N];

int T;

bool flag;

int n, m, cnt;
int f[N], t[N];

int find(int x) {
    return f[x] == x ? x : f[x] = find(f[x]);
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> T; while (T --) {
        cin >> n;
        for (int i = 1; i <= n; ++ i) {
            cin >> a[i].x >> a[i].y >> a[i].e;
            t[++ cnt] = a[i].x, t[++ cnt] = a[i].y;
        }
        std::sort(t + 1, t + cnt + 1);
        m = std::unique(t + 1, t + cnt + 1) - t - 1;

        for (int i = 1; i <= n; ++ i) a[i].x = std::lower_bound(t + 1, t + m + 1, a[i].x) - t, a[i].y = std::lower_bound(t + 1, t + m + 1, a[i].y) - t;

        std::sort(a + 1, a + n + 1, [](node a, node b) {
            return a.e > b.e;
        }), flag = true;

        for (int i = 1; i <= m; ++ i) f[i] = i;

        for (int i = 1; i <= n; ++ i) {
            if (a[i].e == 1) f[find(a[i].x)] = find(a[i].y);
            else if (find(a[i].x) == find(a[i].y)) {flag = false; break;}
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}