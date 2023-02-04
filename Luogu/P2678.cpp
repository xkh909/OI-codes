#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 5e4 + 5;

int L, n, m;
int l = 1, r;
int ans;
int a[N];

bool judge(int mid) {
    int cnt = 0, now = 0, nxt = 0;

    while (nxt < n + 1) {
        ++ nxt;
        if (a[nxt] - a[now] < mid) ++ cnt;
        else now = nxt;
    }

    return cnt > m ? false : true;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> L >> n >> m;
    r = L;

    for (int i = 1; i <= n; ++ i) cin >> a[i];
    a[n + 1] = L;

    while (l <= r) {
        int mid = l + r >> 1;
        if (judge(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}