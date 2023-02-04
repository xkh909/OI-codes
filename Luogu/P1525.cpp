#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 2e4 + 5, M = 1e5 + 5;

struct node {
    int a, b, c;
} a[M];

int n, m;
int f[N << 1];

int find(int x) {
    return f[x] == x ? x : f[x] = find(f[x]);
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n << 1; ++ i) f[i] = i;
    for (int i = 1; i <= m; ++ i) cin >> a[i].a >> a[i].b >> a[i].c;

    std::sort(a + 1, a + m + 1, [](node x, node y) {
        return x.c > y.c;
    });

    for (int i = 1; i <= m; ++ i) {
        int x = find(a[i].a), y = find(a[i].b);

        if (x == y) return cout << a[i].c << endl, 0;

        f[x] = find(a[i].b + n);
        f[y] = find(a[i].a + n);
    }

    cout << 0 << endl;

    return 0;
}