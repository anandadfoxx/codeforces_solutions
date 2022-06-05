#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int dp[100005];
string n;

void computeDP(int l, int r) {
    FOR(i, l, r+1) {
        if (i == 0) dp[i] = 1;
        else dp[i] = dp[i-1] + ((n[i] == n[i-1]) ? 1 : 0);
    }
}

int main() {
    cin >> n;
    computeDP(0, n.length()-1);
    int x;
    cin >> x;

    while (x--) {
        int l, r;
        cin >> l >> r;
        cout << dp[r-1] - dp[l-1] << '\n';
    }
}