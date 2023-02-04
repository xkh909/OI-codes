#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 5e3 + 5;

struct node {
    int to, nxt, w;
} e[N << 2];

int n, m, op, x, y, z;
int cnt, head[N], tot[N], d[N];

bool vis[N];

std::queue<int> q;

inline void add(int u, int v, int w) {
    e[++cnt].to = v;
    e[cnt].nxt = head[u];
    e[cnt].w = w;
    head[u] = cnt;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= m; ++ i) {
        cin >> op >> x >> y;

        if (op == 1) {
            cin >> z;
            add(y, x, z);
        } else if (op == 2) {
            cin >> z;
            add(x, y, -z);
        } else {
            add(x, y, 0), add(y, x, 0);
        }
    }

    for (int i = 1; i <= n; ++ i) add(0, i, 0);

    memset(d, -0x3f, sizeof d);
    d[0] = 0, vis[0] = true;
    q.push(0);

    while (q.size()) {
        int now = q.front();
        q.pop();

        vis[now] = false;

        for (int i = head[now]; i; i = e[i].nxt) {
            if (d[now] + e[i].w > d[e[i].to]) {
                d[e[i].to] = d[now] + e[i].w;
                if (!vis[e[i].to]) {
                    vis[e[i].to] = true;
                    q.push(e[i].to);
                    ++ tot[e[i].to];

                    if (tot[e[i].to] >= n) return cout << "No" << endl, 0;
                }
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}