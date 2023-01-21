#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int n, m, k, x;

int ksm(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1)
            res = res * a % n;
        a = a * a % n;
        b >>= 1;
    }
    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m >> k >> x;

    cout << (x % n + m % n * ksm(10, k) % n) % n << endl;

    return 0;
}