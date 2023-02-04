#include <bits/stdc++.h>

#define int unsigned long long

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e6 + 5;

int n;
int c, ans;
int a[N], b[N], cnt[N];

std::stack<int> q;

signed main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++ i) cin >> a[i];
    for (int i = 1; i <= n; ++ i) cin >> b[i];

    std::sort(a + 1, a + n + 1);
    std::sort(b + 1, b + n + 1);

    for (int i = 2; i <= n; ++ i) {
        if (a[i] != a[i - 1]) {
            int x = a[i - 1] + 1;
            while (x < a[i] && q.size()) {
                int y = q.top();
                q.pop();
                cnt[++ c] = x - y;
                ++ x;
            }
        } else q.push(a[i]);
    }

    int top = a[n] + 1;

    while(q.size()) {
        int head = q.top();
        q.pop();
        cnt[++ c] = top - head;
        ++ top;
    }
    
    std::sort(cnt + 1, cnt + c + 1, [](int a, int b) {
        return a > b;
    });

    for (int i = 1; i <= c; ++ i) ans = ans + b[i] * cnt[i];

    cout << ans << endl;

    return 0;
}