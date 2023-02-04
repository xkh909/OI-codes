#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int M = 500 + 5;

struct node {
    int l, r;
} ans_[M];

int m, k;
int l, r;
int ans;
int a[M];

bool check(int mid) {
    int num = 1, d = 0;
    for (int i = m; i >= 1; -- i) {
        if (a[i] + d > mid) {
            ++ num;
            d = a[i];
        } else {
            d += a[i];
        }
    }
    
    return !(num > k);
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> m >> k;

    for (int i = 1; i <= m; ++ i) {
        cin >> a[i];
        r += a[i];
    }

    while (l <= r) {
        int mid = l + r >> 1;
        if (check(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    int d = 0, now = 1;

    for (int i = m; i >= 1; -- i) {
        if (a[i] + d > ans) {
            ans_[now].l = i + 1;
            ans_[++ now].r = i;
            d = a[i];
        } else {
            d += a[i];
        }
    }

    ans_[now].l = 1, ans_[1].r = m;

    for (int i = now; i >= 1; -- i) {
        cout << ans_[i].l << ' ' << ans_[i].r << endl;
    }

    return 0;
}