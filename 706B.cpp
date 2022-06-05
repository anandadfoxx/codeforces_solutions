#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int doBinser(int l, int r, int val, int* arr) {
    int mid;

    while (l <= r) {
        mid = (l + r) / 2;
        if (val >= arr[mid])
            l = mid+1;
        else if (val < arr[mid])
            r = mid-1;
    }
    return l;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, arr+n);

    int q;
    scanf("%d", &q);
    
    while (q--) {
        int wa;
        scanf("%d", &wa);

        printf("%d\n", doBinser(0, n-1, wa, arr));
    }
}