#include <bits/stdc++.h>
using namespace std;
typedef long long LL;


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    LL g;
    cin >> g;
    LL ans = 0, minus = 0, posit = 0, zero = 0;
    for (LL i = 0; i < g; i++) {
        LL b;
        cin >> b;
        if (b > 0) {
            ans += b - 1;
            posit++;
        } else if (b < 0) {
            ans += abs(b + 1);
            minus++;
        } else zero++;
    }
    if (minus & 1 == 1) {
        if (zero > 0) {
            zero--;
            ans++;
        } else
            ans += 2;
    }
    while (zero > 0) {
        ans++;
        zero--;
    }
    printf("%I64d\n", ans);
}