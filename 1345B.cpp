#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int find(int* arr, int val) {
    int l = 1, r = 30000;
    while (l <= r) {
        int m = (l + r) / 2;
        if (l != r) {
            if (val > arr[m] && arr[m+1] <= val) l = m + 1;
            else if (val < arr[m]) r = m - 1;
            else return m;
        } else return m;
        // printf("%d %d\n", l, r);
    }
    return 0;
}

int main() {
    int t;
    cin >> t;

    int dp[30001];

    // COMPUTE DP
    dp[1] = 2;
    FOR(i, 2, 30001) dp[i] = dp[i-1] + (3 * i) - 1;

    while (t--) {
        int x, ans = 0;
        cin >> x;

        while (x > 1) {
            int idx = find(dp, x),
                tmp = x / dp[idx];
            // cout << idx << ' ';
            ans += tmp;
            x -= tmp * dp[idx];
        }
        cout << ans << '\n';
    }
}