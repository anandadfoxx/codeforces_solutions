#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int arr[n+1],
        ans = 0;

    arr[0] = -1;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        if (arr[i-1] != arr[i])
            ans++;
    }
    cout << ans << "\n";
}