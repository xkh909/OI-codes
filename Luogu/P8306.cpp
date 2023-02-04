#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 3e6 + 5;

int T;

int n, q, idx;
int st[N][65], cnt[N], t[N][80];

std::string s;

inline int get(char x) {
    if (x >= 'A' && x <= 'Z') return x - 'A';
    else if (x >= 'a' && x <= 'z') return x - 'a' + 26;
    else return x - '0' + 52;
}

inline void insert(std::string str) {
    int p = 0;
    for (char i : str) {
        int c = get(i);
        if (!t[p][c]) t[p][c] = ++ idx;
        p = t[p][c];
        ++ cnt[p];
    }
}

inline int find(std::string str) {
    int p = 0, len = str.size();
    for (char i : str) {
        int c = get(i);
        if (!t[p][c]) return 0;
        p = t[p][c];
    }
    return cnt[p];
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> T; while (T --) {
        for (int i = 0; i <= idx; ++ i)
            for (int j = 0; j <= 79; ++ j)
                t[i][j] = 0;
        
        for (int i = 0; i <= idx; ++ i) cnt[i] = 0;

        idx = 0;

        cin >> n >> q;
        while (n --) {
            cin >> s;
            insert(s);
        }
        while (q --) {
            cin >> s;
            cout << find(s) << endl;
        }
    }

    return 0;
}