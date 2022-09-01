#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;

    while (t--) {
        LL x;
        cin >> x;
        bool found = false;

        for (int i = 1; i <= (int)ceil(cbrt(x)) && !found; i++) {
            LL a_c = (LL)pow(i, 3);
            double b_cbrt = cbrt(x - a_c);
            if (b_cbrt > 0 && ceil(b_cbrt) == floor(b_cbrt)) found = true;
        }
        printf((found) ? "YES\n" : "NO\n");
    }
}