#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

std::unordered_map<int, bool> vis;

int T;
int n;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> T; while (T --) {
        cin >> n;
        while (n --) {
            int x;
            cin >> x;
            if (!vis[x]) {
                cout << x << ' ';
                vis[x] = true;
            }
        }
        cout << endl;
        vis.clear();
    }

    return 0;
}