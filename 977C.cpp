#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];

    FOR(i, 0, n) cin >> arr[i];

    sort(arr, arr+n);

    int ans = 0, cnt = 0, it = 0;

    if (k == 0) ans = arr[0]-1;
    else {
        while (cnt < k) {
            ans = arr[cnt];
            while (arr[cnt] == ans) {
                cnt++;
            }
        }
    }
    printf("%d\n", (cnt == k && ans > 0) ? ans : -1);
}