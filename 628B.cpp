#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    getline(cin, s);
    int len = s.length();

    LL dp[len];
    memset(dp, 0x0, sizeof(dp));

    FOR(i, 0, len) {
        if (i == 0) {
            dp[i] = ((s[i] - '0') % 4) == 0;
        } else {
            int md = 0;
            dp[i] = dp[i-1];
            for (int j = i; j >= i-1; j--) {
                if (j == i)
                    md += s[j] - '0';
                else if (j == i-1)
                    md += 10 * (s[j] - '0');
                dp[i] += (md % 4 == 0) ? 1 : 0;
            }
            dp[i] += (md % 4 == 0 && i > 1) ? i-1 : 0;
        }
    }
    printf("%lld\n", dp[len-1]);
}