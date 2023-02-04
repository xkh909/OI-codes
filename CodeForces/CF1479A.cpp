#include <bits/stdc++.h>

using std::cin;
using std::cout;

// const char endl = '\n';

const int N = 1e5 + 5;

int n;
int l = 1, r;
int a[N];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;
    r = n;

    while (l < r) {
        int mid = l + r >> 1;
        if (a[mid] == 0) {
            cout << "? " << mid << std::endl;
            cin >> a[mid];
        }
        if (a[mid + 1] == 0) {
            cout << "? " << mid + 1 << std::endl;
            cin >> a[mid + 1];
        }
        if (a[mid] < a[mid + 1]) r = mid;
        else l = mid + 1;
    }

    cout << "! " << l << std::endl;

    return 0;
}