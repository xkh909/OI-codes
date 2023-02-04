#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

const int N = 1e6 + 5;

char a[N], b[N];
int next1[N], next2[N];
int stack[N], top;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    scanf("%s%s", a + 1, b + 1);
    int la = strlen(a + 1), lb = strlen(b + 1);

    for (int i = 2, j = 0; i <= lb; ++ i) {
        while (j && b[i] != b[j + 1]) j = next1[j];
        if (b[i] == b[j + 1]) ++ j;
        next1[i] = j;
    }

    for (int i = 1, j = 0; i <= la; ++ i) {
        while (j && a[i] != b[j + 1]) j = next1[j];
        if (a[i] == b[j + 1]) ++ j;
        next2[i] = j;
        stack[++ top] = i;
        if (j == lb) top -= lb, j = next2[stack[top]];
    }

    for (int i = 1; i <= top; ++ i) cout << a[stack[i]];
    cout << endl;

    return 0;
}