#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

LL modCircular(LL n, LL x) {
    return (n < 0) ? (x + (n % x)) % x : n % x;
}

int main() {
    int n, m;
    cin >> n >> m;

    LL ans = 0;
    int pos = -1;

    while (m--) {
        int x;
        cin >> x;
        ans += (pos == -1) ? modCircular(x - 1, n) : modCircular(x - pos, n);
        pos = x;
    }
    cout << ans << '\n';
}