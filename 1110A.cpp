#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    int b, k;
    scanf("%d", &b);
    scanf("%d", &k);

    LL ans = 0;

    while (k--) {
        int num;
        scanf("%d", &num);
        ans += (num * LL(pow(b % 2, k))) % 2;
    }
    if ((ans & 1) == 0)
        printf("even\n");
    else
        printf("odd\n");
}