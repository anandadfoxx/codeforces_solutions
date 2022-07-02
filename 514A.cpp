#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    string s;
    cin >> s;

    int sl = s.length();

    for (int i = sl-1; i >= 0; i--) {
        int e = s[i] - '0';

        if (e > 4 && (i != 0 || (i == 0 && e < 9))) {
            s[i] = (9 - e) + '0';
        }
    }
    cout << s << '\n';
}