#include <bits/stdc++.h>

using std::cin;
using std::cout;
const char endl = '\n';

const int N = 15;

int n, a[N];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    
    cin >> n;
    for (int i = 1; i <= n; ++ i) cin >> a[i];
    
    std::prev_permutation(a + 1, a + n + 1);
    
    for (int i = 1; i <= n; ++ i) cout << a[i] << ' ';
    cout << endl;
    
    return 0;
}