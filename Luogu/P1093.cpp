#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 305;

struct node {
    int id;
    int a, b, c;
    int sum;
} a[N];

int n;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++ i) {
        a[i].id = i;
        cin >> a[i].a >> a[i].b >> a[i].c;
        a[i].sum = a[i].a + a[i].b + a[i].c;
    }

    std::sort(a + 1, a + n + 1, [](node a, node b) {
        if (a.sum != b.sum) return a.sum > b.sum;
        else if (a.a != b.a) return a.a > b.a;
        else return a.id < b.id;
    });

    for (int i = 1; i <= 5; ++ i) {
        cout << a[i].id << ' ' << a[i].sum << endl;
    }

    return 0;
}