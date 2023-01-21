#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 3001;

int l, r;
int a[N];

std::vector<int> v;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> l >> r;

    for (int i = l; i <= r; ++ i) {
        if (i % 400 == 0) v.push_back(i);
        else if (i % 4 == 0 && !(i % 100 == 0)) v.push_back(i);
    }

    cout << v.size() << endl;

    for (auto i : v) cout << i << ' ';

    return 0;
}