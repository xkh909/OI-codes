#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 10 + 5;

#define ls u << 1
#define rs u << 1 | 1

struct node {
    int l, r;
    long long s, d, x;

    node() {
        l = r = s = d = 0;
        x = 1;
    }
    node(int _l, int _r) {
        l = _l, r = _r;
        s = d = 0;
        x = 1;
    }
} tr[N << 2];

long long a[N];

inline void pushup(int u) {
    tr[u].s = (tr[ls].s + tr[rs].s);
}

inline void pushdown(int u) {
    tr[ls].s = ((tr[ls].s * tr[u].x) + (tr[ls].r - tr[ls].l + 1) * tr[u].d);
    tr[ls].x = tr[ls].x * tr[u].x;
    tr[ls].d = (tr[ls].d * tr[u].x + tr[u].d);

    tr[rs].s = ((tr[rs].s * tr[u].x) + (tr[rs].r - tr[rs].l + 1) * tr[u].d);
    tr[rs].x = tr[rs].x * tr[u].x;
    tr[rs].d = (tr[rs].d * tr[u].x + tr[u].d);

    tr[u].d = 0;
    tr[u].x = 1;
}

void build(int u, int l, int r) {
    tr[u] = node(l, r);

    if (l == r) return tr[u].s = a[l], void();

    int mid = l + r >> 1;

    build(ls, l, mid);
    build(rs, mid + 1, r);
    
    pushup(u);
}

void modify(int u, int l, int r, int x, int d) {
    if (tr[u].l >= l && tr[u].r <= r) {
        tr[u].s = ((tr[u].s * x) + (tr[u].r - tr[u].l + 1) * d );
        tr[u].x = tr[u].x * x;
        tr[u].d = (tr[u].d * x + d);
        return;
    }

    int mid = tr[u].l + tr[u].r >> 1;

    pushdown(u);

    if (l <= mid) modify(ls, l, r, x, d);
    if (r > mid) modify(rs, l, r, x, d);

    pushup(u);
}

long long query(int u, int l, int r) {
    if (tr[u].l >= l && tr[u].r <= r) return tr[u].s;

    int mid = tr[u].l + tr[u].r >> 1;
    long long s = 0;

    pushdown(u);

    if (l <= mid) s = query(ls, l, r);
    if (r > mid) s = (s + query(rs, l, r));

    return s;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> a[1] >> a[2];

    build(1, 1, 2);

    modify(1, 1, 1, a[2], 0);

    cout << query(1, 1, 1) << endl;

    return 0;
}