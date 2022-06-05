#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int ans = 0;

    for (int i = 0; i < n; i++)
        if ((arr[i] >= arr[k-1]) && (arr[i] > 0))
            ans++;

    printf("%d\n", ans);
}