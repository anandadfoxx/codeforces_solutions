#include <bits/stdc++.h>
using namespace std;
typedef long long LL;


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin >> T;

    while (T--) {
        LL s, a, b, c;
        cin >> s >> a >> b >> c;
        LL beli = s / c;
        LL dapet = beli / a;
        beli += dapet * b;
        printf("%I64d\n", beli);
    }
}