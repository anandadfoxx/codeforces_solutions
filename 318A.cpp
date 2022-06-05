#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL ceila(LL g) {
    return ((g & 1) == 0) ? g >> 1 : (g >> 1) + 1;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    LL n, k;
    scanf("%I64d", &n);
    scanf("%I64d", &k);

    LL mid = ceila(n);

    if (k <= mid)
        printf("%I64d\n", (2*k)-1);
    
    else
        printf("%I64d\n", 2*(k-mid));
}