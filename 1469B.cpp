#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int n, m, maxs, dp[105][105], r[105], b[105];

void calc(int rI, int bI) {
    if (rI > n || bI > m) return;

    if (rI == 0 && bI == 0) dp[rI][bI] = 0;
    if (dp[rI+1][bI] == -1) {
        dp[rI+1][bI] = dp[rI][bI] + r[rI];
        calc(rI+1, bI);
    }
    if (dp[rI][bI+1] == -1) {
        dp[rI][bI+1] = dp[rI][bI] + b[bI];
        calc(rI, bI+1);
    }
    maxs = max(maxs, max(dp[rI+1][bI], dp[rI][bI+1]));
}

void solve() {
    memset(r, 0, sizeof(r));
    memset(b, 0, sizeof(b));
    cin >> n;

    FOR(i, 0, n)
        cin >> r[i];
    
    cin >> m;

    FOR(i, 0, m)
        cin >> b[i];

    maxs = 0;

    memset(dp, -1, sizeof(dp));
    calc(0, 0);
    cout << maxs << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}