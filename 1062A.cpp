#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int n;
    cin >> n;

    int arr[n], diff[n][n];
    memset(diff, 0, sizeof(diff));

    FOR(i, 0, n) {
        cin >> arr[i];
        FOR(j, 0, i)
            diff[j][i] = arr[i] - arr[j];
    }
    int ans = 0;
    FOR(i, 0, n) {
        int tmpmaks = 0;
        FOR(j, 0, n) {
            if (diff[i][j] == abs(i-j) && diff[i][j]) {
                int tmpdiv = diff[i][j]-1;
                if (arr[i] == 1 && arr[j] == j+1 || arr[j] == 1000) tmpdiv++;
                tmpmaks = max(tmpmaks, tmpdiv);
            }
        }
        ans = max(ans, tmpmaks);
    }
    cout << ans << '\n';
}