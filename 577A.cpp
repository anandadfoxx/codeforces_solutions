#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    LL n, x;
    cin >> n >> x;

    LL ans = 0;

    for (LL i = 1; i <= floor(sqrt(double(x))); i++) {
        if (i <= n && !(x % i) && (x / i) <= n)
            ans += (i == (x/i)) ? 1 : 2;
    }
    cout << ans << '\n';
}