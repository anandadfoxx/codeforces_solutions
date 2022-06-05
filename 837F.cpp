#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    LL n, k;
    cin >> n >> k;
    LL arr[n];
    LL pre[n];
    LL prefixsum = 0;
    for (LL i = 0; i < n; i++) {
        cin >> arr[i];
        pre[i] = (i > 0) ? pre[i-1] + arr[i] : pre[i] = arr[i];
        prefixsum += pre[i];
        if (prefixsum >= k) {
            printf("%I64d\n", i);
            break;
        }
        if (i == n-1 && prefixsum < k)
            printf("%I64d\n", k-1);
    }
}