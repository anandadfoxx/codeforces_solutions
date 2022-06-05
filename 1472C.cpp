#include <bits/stdc++.h>
#define FOR(i, start, end) for(long long i = start; i < end; i++)
using namespace std;
typedef long long LL;

void solve() {
    LL n;
    cin >> n;
    LL dp[n], dpIdx[n], arr[n];

    FOR(i, 0, n) {
        cin >> arr[i];
    }
    LL ans = INT_MIN;
    for (LL i = n-1; i >= 0; i--) {
        dp[i] = arr[i];
        LL j = i + arr[i];

        if (j < n) {
            dp[i] += dp[j];
        }
        ans = max(ans, dp[i]);
    }
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}