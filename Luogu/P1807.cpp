#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1500 + 5;

inline int max(int a, int b) {return a > b ? a : b;}

std::queue<int> q;

int n, m;
int g[N][N], dis[N];

void bfs() {
    memset(dis, -1, sizeof dis);
    dis[1] = 0;
    q.push(1);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int i = 1; i <= n; ++ i) {
            if (g[u][i] && dis[i] < dis[u] + g[u][i]) {
                dis[i] = dis[u] + g[u][i];
                q.push(i);
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    while (m --) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u][v] = max(g[u][v], w);
    }

    bfs();

    cout << dis[n] << endl;

    return 0;
}