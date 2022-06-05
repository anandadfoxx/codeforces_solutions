#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    short t;
    scanf("%hd", &t);

    while (t--) {
        LL n, k;
        scanf("%lld", &n);
        scanf("%lld", &k);


        LL minPkg = LLONG_MAX;
        if (n > k) {
            // FIND THE MAX FACTOR, OPTIMIZE BY O(SQRT(N))
            for (LL i = 2; i <= sqrt(n) && i <= k; i++) {
                if ((n % i) == 0) {
                    LL ju;
                    if ((n / i) <= k) ju = min(i, n / i);
                    else ju = n / i;

                    minPkg = min(minPkg, ju);
                }
            }
            if (minPkg == LLONG_MAX) minPkg = n;
        }
        else minPkg = 1;

        printf("%lld\n", minPkg);
    }
}