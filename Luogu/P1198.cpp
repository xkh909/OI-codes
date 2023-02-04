#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int M = 2e5 + 5;

int m, d, n, t;
int a[M], mx[M];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> m >> d;

    while (m --) {
        char op;
        int x;

        cin >> op >> x;
        
        if (op == 'Q') {
            cout << mx[n - x + 1] << endl;
            t = mx[n - x + 1];
        } else {
            a[++ n] = (x + t) % d;
            int i = n;
            while (mx[i] < a[n]) mx[i --] = a[n];
        }
    }

    return 0;
}