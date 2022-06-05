#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    LL s;
    scanf("%d", &n);
    scanf("%I64d", &s);

    LL arr[n];

    for (int i = 0; i < n; i++)
        scanf("%I64d", &arr[i]);
    
    sort(arr, arr+n);
    int mid = n >> 1;

    LL ans = 0;

    if (arr[mid] < s) {
        while (arr[mid] < s && mid < n) {
            ans += s-arr[mid];
            mid++;
        }
    }
    else if (arr[mid] > s) {
        while (arr[mid] > s && mid >= 0) {
            ans += arr[mid]-s;
            mid--;
        }
    }
    printf("%I64d\n", ans);
}