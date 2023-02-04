#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 5e4 + 5;

int n, k;
int ans;
int f[3 * N];

int find(int x) {
    return f[x] == x ? x : f[x] = find(f[x]);
}

void join(int x, int y) {
    x = find(f[x]), y = find(f[y]);
    f[x] = y;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= 3 * n; ++ i) f[i] = i;
    while (k --) {
        int op, x, y;
        cin >> op >> x >> y;

        if (x > n || y > n) {++ ans; continue;}

        if (op == 1) {
            if (find(x + n) == find(y) || find(x + (n << 1)) == find(y)) {++ ans; continue;}
            join(x, y), join(x + n, y + n), join(x + (n << 1), y + (n << 1));
        } else {
            if (x == y) {++ ans; continue;}
            if (find(x) == find(y) || find(x + (n << 1)) == find(y)) {++ ans; continue;}
            join(x, y + (n << 1)), join(x + n, y), join(x + (n << 1), y + n);
        }
    }

    cout << ans << endl;

    return 0;
}