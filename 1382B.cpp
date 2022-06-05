#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

void solve() {
    int n;
    cin >> n;

    int arr[n], maxs = INT_MIN, consec = 0;

    FOR(i, 0, n) cin >> arr[i];

    int k = 0;

    while (k < n && arr[k] == 1)
        k++;

    bool first = false;
    if (n - k == 0)
        first = (k & 1) != 0;
    else first = (k & 1 ) == 0;

    printf((first) ? "First\n" : "Second\n");
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();
}