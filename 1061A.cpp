#include <bits/stdc++.h>
using namespace std;
typedef long long LL;


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    LL n, s;
    cin >> n >> s;
    LL ans = 0;
    while (s > 0) {
        LL po = s / n;
        ans += po;
        s -= po * n;
        n--;
    }
    printf("%I64d\n", ans);
}