#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, comp = 0;
        cin >> n;
        string s;
        cin >> s;
        int open = 0, close = 0;

        FOR(i, 0, s.length()) {
            if (s[i] == '(') {
                open++;
            }
            else if (s[i] == ')') {
                if (open > 0) {
                    open--;
                    comp++;
                } else {
                    close++;
                }
            }
        }
        cout << (n>>1) - comp << '\n';
    }
}