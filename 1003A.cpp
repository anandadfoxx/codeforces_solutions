#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int arr[101];
 
    memset(arr, 0, sizeof(arr));
    int maks = INT_MIN;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        arr[b]++;
        maks = max(maks, arr[b]);
    }
    printf("%d\n", maks);
}