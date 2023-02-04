#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e5 + 5;

inline int min(int a, int b) {return a < b ? a : b;}

#define ls u << 1
#define rs u << 1 | 1

struct node {
    int l, r;
    int m;

    node() {
        l = r = 0;
        m = 2e9;
    }
    node(int _l, int _r) {
        l = _l, r = _r;
        m = 2e9;
    }
} tr[N << 2];

int m, n;
int a[N];

inline void pushup(int u) {
    tr[u].m = min(tr[ls].m, tr[rs].m);
}

void build(int u, int l, int r) {
    tr[u] = node(l, r);
    if (l == r) return tr[u].m = a[l], void();

    int mid = l + r >> 1;

    build(ls, l, mid);
    build(rs, mid + 1, r);

    pushup(u);
}

int query(int u, int l, int r) {
    if (l == tr[u].l && r == tr[u].r) return tr[u].m;

    int mid = tr[u].l + tr[u].r >> 1;

    if (r <= mid) return query(ls, l, r);
    if (l > mid) return query(rs, l, r);

    return min(query(ls, l, mid), query(rs, mid + 1, r));
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; ++ i) cin >> a[i];

    build(1, 1, n);

    while (m --) {
        int l, r;
        cin >> l >> r;
        cout << query(1, l, r) << ' ';
    }

    return 0;
}