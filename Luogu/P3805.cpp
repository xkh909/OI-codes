#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int n, mr, pos, ans, ln[22000010];
char str[11000001], tmp[22000010];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> (str + 1);
    n = strlen(str + 1);

    tmp[0] = tmp[1] = '#';

    for (int i = 1; i <= n; ++ i) tmp[i << 1] = str[i], tmp[(i << 1) + 1] = '#';

    n = (n << 1) + 1;

    for (int i = 1; i <= n; ++ i) {
        if (mr > i) ln[i] = std::min(ln[(pos << 1) - i], mr - i);
        else ln[i] = 1;

        while (tmp[i - ln[i]] == tmp[i + ln[i]]) ++ ln[i];

        if (i + ln[i] - 1 > mr) mr = i + ln[i] - 1, pos = i;

        if (ln[i] > ans) ans = ln[i];
    }

    cout << ans - 1 << endl;
    
    return 0;
}