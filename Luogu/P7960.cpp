#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e7 + 5;

int T;
int n, now;

int ans[N];

bool st[N];

bool check(int x) {
    while (x) {
        if (x % 10 == 7) return true;
        x /= 10;
    }
    return false;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    for (int i = 1; i < N; ++ i) {
        if (st[i]) continue;
        
        if (check(i)) {
            st[i] = true;
            for (int j = i; j < N; j += i) st[j] = true;
            continue;
        }

        ans[now] = i;
        now = i;
    }

    cin >> T;
    while (T -- ) {
        cin >> n;

        if (st[n]) cout << -1 << endl;
        else cout << ans[n] << endl;
    }

    return 0;
}