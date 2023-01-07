#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 20;

int n;
char g[N][N];
bool col[N], dg[N], udg[N];

void dfs(int u) {
    if (u == n) {
        for (int i = 0; i < n; ++ i) {
            cout << g[i] << endl;
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < n; ++ i) {
        if (!col[i] && !dg[u + i] && !udg[n - u + i]) {
            g[u][i] = 'Q';
            col[i] = dg[u+i] = udg[n-u+i] = true;
            
            dfs(u + 1);

            col[i] = dg[u + i] = udg[n - u + i] = false;
            g[u][i] = '.';
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n;

    for (int i = 0; i < n; ++ i) {
        for (int j = 0; j < n; ++ j) {
            g[i][j] = '.';
        }
    }

    dfs(0);

    return 0;
}