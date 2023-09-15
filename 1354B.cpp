#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
#define ROF(i, start, end) for(int i = end; i > start; i--)
#define FORO(i, end) for(int i = 0; i < end; i++)
#define ROFO(i, start) for(int i = start; i >= 0; i--)
#define pub push_back
#define fir first
#define sec second
#define pob pop_back
#define mp make_pair
#define read_arr(arr, start, end) for (int i = start; i < end; i++) { cin >> arr[i]; }
#define vi vector<int>
#define vl vector<long>
#define pii pair<int, int>
using namespace std;
typedef long long LL;
typedef long double LD;

void solve() {
    string s;
    cin >> s;
    int ans = 0;
    
    if (s.length() > 2) {
        int len = s.length();

        int dp[len], idx[4];
        memset(dp, 0, sizeof(dp));
        memset(idx, -1, sizeof(idx));

        FOR(i, 0, len) {
            idx[s[i] - '0'] = i;
            if (i >= 2 && idx[1] > -1 && idx[2] > -1 && idx[3] > -1) {
                dp[i] = max(idx[1], max(idx[2], idx[3])) - min(idx[1], min(idx[2], idx[3])) + 1;
                if (dp[i-1] > 0) dp[i] = min(dp[i-1], dp[i]);
            }
        }

        ans = dp[len-1];
    }

    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}