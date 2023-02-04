#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 5e5 + 5;

struct node {
    int to, nxt;
} e[N << 1];

int n, m, s;
int cnt, head[N];
int dep[N], f[N][22], lg[N];

inline void add(int u, int v) {
    e[++ cnt].to = v;
    e[cnt].nxt = head[u];
    head[u] = cnt;
}

void dfs(int now, int fa) {
    f[now][0] = fa;
    dep[now] = dep[fa] + 1;

    for (int i = 1; i <= lg[dep[now]]; ++ i) f[now][i] = f[f[now][i - 1]][i - 1];
    for (int i = head[now]; i; i = e[i].nxt) {
        if (e[i].to != fa) dfs(e[i].to, now);
    }
}

inline int lca(int u, int v) {
    if (dep[u] < dep[v]) std::swap(u, v);
    while (dep[u] > dep[v]) u = f[u][lg[dep[u] - dep[v]] - 1];

    if (u == v) return u;

    for (int k = lg[dep[u]] - 1; k >= 0; -- k) {
        if (f[u][k] != f[v][k]) u = f[u][k], v = f[v][k];
    }

    return f[u][0];
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m >> s;

    for (int i = 1; i <= n; ++ i) lg[i] = lg[i - 1] + (1 << lg[i - 1] == i);

    for (int i = 1; i < n; ++ i) {
        int u, v;
        cin >> u >> v;
        add(u, v), add(v, u);
    }

    dfs(s, 0);
    
    while (m --) {
        int u, v;
        cin >> u >> v;
        cout << lca(u, v) << endl;
    }

    return 0;
}