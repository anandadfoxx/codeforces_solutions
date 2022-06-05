#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        LL n;
        scanf("%lld", &n);

        int exp = 1;
        // ANGGAP -1 INI BELUM NEMU
        int ans = -1;
        LL xs = 0;
        // SELAMA BELUM NEMU, CARI TERUS
        while (ans == -1) {
            xs += (LL)(pow(2, exp-1));
            if (exp == 1) {
                if (n == 1)
                    ans = 1;
            }
            else {
                if ((n % xs) == 0)
                    ans = (n / xs);
            }
            exp++;
        }
        printf("%d\n", ans);
    } 
}