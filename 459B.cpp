#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define FOR(i, start, end) for(LL i = start; i < end; i++)


int main() {
    LL n;
    cin >> n;

    LL arr[n], mins = INT_MAX, maxs = INT_MIN, minF = 0, maxF = 0;

    FOR(i, 0, n) {
        cin >> arr[i];
        mins = min(mins, arr[i]);
        maxs = max(maxs, arr[i]);
    }
    FOR(i, 0, n) {
        if (arr[i] == mins) minF++;
        if (arr[i] == maxs) maxF++;
    }
    printf("%lld %lld\n", maxs-mins, (mins != maxs) ? minF * maxF : ((maxF * (maxF-1)) / 2));
}