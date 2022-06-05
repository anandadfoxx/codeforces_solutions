#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    unsigned short t;
    scanf("%hu", &t);

    while (t--) {
        LL n, k;
        scanf("%lld", &n);
        scanf("%lld", &k);

        LL val = k + ((k-1) / (n-1));

        if (val % n == 0) val++;

        printf("%lld\n", val);
    }
}