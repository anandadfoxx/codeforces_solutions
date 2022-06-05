#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

LL combin(LL x) {
    return (x * (x-1)) / 2;
}

int main() {
    LL m, n;
    scanf("%lld", &n);
    scanf("%lld", &m);

    LL maxPairs = combin(n - (m - 1)), overT = n % m;
    LL minPairs = (m - overT) * combin(n / m) + overT * combin(n / m + 1);;

    printf("%lld %lld\n", minPairs, maxPairs);
}