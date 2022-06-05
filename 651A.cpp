#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int dp[350][350];
 
int doDP(int x, int y) {
    if (x <= 0 || y <= 0) return 0;
    else if (dp[x][y] == -1)
        if (x > 1 || y > 1) 
            dp[x][y] = max(doDP(x+1, y-2), doDP(x-2, y+1)) + 1;
        else dp[x][y] = 0;
        
    return dp[x][y];
}
 
int main() {
    memset(dp, -1, sizeof(dp));
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a1, a2;
    scanf("%d", &a1);
    scanf("%d", &a2);
 
    int hsl = doDP(a1, a2);
    printf("%d\n", hsl);
}