#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int n; cin >> n;

    int arr[n];
    LL dp[n], dpSorted[n];

    FOR(i, 0, n) {
        cin >> arr[i];
        dp[i] = (i == 0) ? arr[i] : arr[i] + dp[i-1];
    }

    sort(arr, arr+n);

    FOR(i, 0, n) {
        dpSorted[i] = (i == 0) ? arr[i] : arr[i] + dpSorted[i-1];
    }

    int m; cin >> m;

    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;

        LL dif;

        if (type == 1) {
            dif = dp[r-1];
            if (l > 1) dif -= dp[l-2];
        } else if (type == 2) {
            dif = dpSorted[r-1];
            if (l > 1) dif -= dpSorted[l-2];
        }
        cout << dif << '\n';
    }
}