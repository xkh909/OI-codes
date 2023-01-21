#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 11;

int n, ans;
int a[N];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    
    for (int i = 1; i <= 10; ++ i)
        cin >> a[i];
    
    cin >> n;
    
    n += 30;
    
    for (int i = 1; i <= 10; ++ i) {
        if (n >= a[i]) ++ ans;
    }
    
    cout << ans << endl;
    
    return 0;
}