#include <bits/stdc++.h>
using namespace std;
typedef long long LL;


int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n], b[n];

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        
        int dif[n];
        bool ka = 1;
        int gaps = 0, ptkan = -1;
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
            dif[i] = b[i]-a[i];
            if (dif[i] < 0)
                ka = 0;
            else if (dif[i] != ptkan) {
                ptkan = dif[i];
                gaps++;
            }
        }
        if (dif[0] == 0) gaps--;
        if (dif[n-1] == 0) gaps--;
        if (gaps > 1) ka = 0;

        (ka) ? printf("YES\n") : printf("NO\n");
    }
}