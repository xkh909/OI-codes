#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

std::queue<int> q;

int n, m, now = 1;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; ++ i) q.push(i);

    while(q.size()) {
        if (now == m) {
            cout << q.front() << ' ';
            q.pop();
            now = 1;
        } else {
            ++ now;
            q.push(q.front());
            q.pop();
        }
    }

    return 0;
}