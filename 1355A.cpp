#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define FOR(i, start, end) for(LL i = start; i < end; i++)

int main() {
    int t;
    cin >> t;

    while (t--) {
        LL a0, k;
        cin >> a0 >> k;

        LL fn = a0;
        FOR(i, 2, k+1) {
            string s = to_string(fn);
            sort(s.begin(), s.end());
            if (s[0] - '0' == 0) break;
            else {
                int mins = INT_MAX,
                    maxs = INT_MIN,
                    len = s.length();

                FOR(i, 0, len) {
                    mins = min(mins, s[i] - '0');
                    maxs = max(maxs, s[i] - '0');
                }

                fn += mins * maxs;
            }
        }
        cout << fn << '\n';
    }
}