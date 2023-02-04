#include <bits/stdc++.h>

using std::cin;
using std::cout;

const char endl = '\n';

int T;

bool flag;

std::stack<char> s1, s2, s3;
std::string s;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    T = 1; while (T --) {
        while (s1.size()) s1.pop();
        while (s2.size()) s2.pop();
        while (s3.size()) s3.pop();

        cin >> s;
        flag = true;
        for (char i : s) {
            if (i == '(') {
                s1.push(i);
            } else if (i == ')') {
                if (s1.size()) s1.pop();
                else {
                    flag = false; break;
                }
            } else if (i == '[') {
                s2.push(i);
            } else if (i == ']') {
                if (s2.size()) s2.pop();
                else {
                    flag = false; break;
                }
            } else if (i == '{') {
                s3.push(i);
            } else if (i == '}') {
                if (s3.size()) s3.pop();
                else {
                    flag = false; break;
                }
            }
        }
        if (!flag || s1.size() || s2.size() || s3.size()) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}