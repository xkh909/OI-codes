#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int p = 80112002, N = 5005;

int n,m, ans;
int in[N], out[N], f[N], mp[N][N];

std::queue<int> q;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= m; ++ i) {
        int u, v;
        cin >> u >> v;
        mp[u][v] = 1;
        ++out[u], ++in[v];
    }
    for (int i = 1; i <= n; ++ i) {
        if (!in[i]) {
            f[i] = 1;
            q.push(i);
        }
    }
    while(q.size()) {
        int t = q.front();
        q.pop();

        for (int i = 1; i <= n; ++ i) {
            if (!mp[t][i]) continue;
            
            f[i] = (f[i] + f[t]) % p;
            -- in[i];

            if (!in[i]) {
                if (!out[i]) {
                    ans = (ans + f[i]) % p;
                    continue;
                }
                q.push(i);
            }
        }
    }

    cout << ans << endl;

    return 0;
}