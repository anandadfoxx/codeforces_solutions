#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, arr+n);

    for (int i = 0; i < n; i++)
        (i != n-1) ? printf("%d ", arr[i]) : printf("%d\n", arr[i]);
}