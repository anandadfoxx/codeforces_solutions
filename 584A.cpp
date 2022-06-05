#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    int n, t;
    scanf("%d %d", &n, &t);

    if (t < 10) {
        printf("%d", t);
        for (int i = 1; i <= n-1; i++)
            printf("0");
        printf("\n");
    }
    else if (n > 1) {
        printf("1");
        for (int i = 1; i <= n-1; i++)
            printf("0");
        printf("\n");
    }
    else printf("-1\n");
}