#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e6 + 5;

int n;
long long ans;
int a[N], tmp[N];

void sort(int q[], int l, int r) {
    if (l >= r) return;

    int mid = l + r >> 1;

    sort(q, l, mid), sort(q, mid + 1, r);

    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r) {
        if (q[i] <= q[j]) tmp[k ++] = q[i ++];
        else {
            tmp[k ++] = q[j ++];
            ans += mid - i + 1;
        }
    }

    while (i <= mid) tmp[k ++] = q[i ++];
    while (j <= r) tmp[k ++] = q[j ++];

    for (int i = l, j = 0; i <= r; ++ i, ++ j) q[i] = tmp[j];
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; ++ i) cin >> a[i];

    sort(a, 1, n);

    cout << ans << endl;

    return 0;
}