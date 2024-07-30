#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    LL n, k;
    cin >> n >> k;
    LL newk = (n > k) ? k*(LL)ceil((double)n/(double)k) : k;
    LL ans = (newk/n) + ((newk%n) > 0);
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    
    while (t--) solve();
}