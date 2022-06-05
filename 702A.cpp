#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int ans = 0, tmp = 1, arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i > 0) {
            if (arr[i] > arr[i-1]) tmp++;
            else tmp = 1;
        }
        ans = max(ans, tmp);
    }
    cout << ans << '\n';
}