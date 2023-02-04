#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int l = 1, r = 1e9 + 1;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    while (l < r) {
        int mid = l + r >> 1;

        cout << mid << std::endl;

        int op;
        cin >> op;

        if (op == 0) return 0;
        else if (op == -1) l = mid;
        else r = mid;
    }

    return 0;
}