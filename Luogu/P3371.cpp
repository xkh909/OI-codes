#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e4 + 5, M = 5e5 + 5;

struct edge {
    int to, nxt, w;
} e[M];

struct node {
    int w, now;
    inline bool operator<(const node &x) const {
        return w > x.w;
    }
};

std::priority_queue<node> q;

int n, m, s, cnt;
int head[N], dis[N], vis[N];

inline void add(int u, int v, int w) {
    e[++ cnt].to = v;
    e[cnt].w = w;
    e[cnt].nxt = head[u];
    head[u] = cnt;
}

inline void dij() {
    for (int i = 1; i <= n; ++ i) dis[i] = 2147483647;
    dis[s] = 0;
    q.push({0, s});

    while (!q.empty()) {
        node x = q.top();
        q.pop();
        int u = x.now;
        if (vis[u]) continue;
        vis[u] = 1;

        for (int i = head[u]; i; i = e[i].nxt) {
            int v = e[i].to;
            if (dis[v] > dis[u] + e[i].w) {
                dis[v] = dis[u] + e[i].w;
                q.push({dis[v], v});
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m >> s;
    while (m --) {
        int u, v, w;
        cin >> u >> v >> w;
        add(u, v, w);
    }
    
    dij();

    for (int i = 1; i <= n; ++ i) cout << dis[i] << ' ';
    cout << endl;

    return 0;
}