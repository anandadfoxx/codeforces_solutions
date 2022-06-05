#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int ar[n], ans = 0;

    int idxmaxs, maxs = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        if (maxs < ar[i]) {
            maxs = ar[i];
            idxmaxs = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i != idxmaxs)
            ans += maxs - ar[i];
    }
    cout << ans << "\n";
}