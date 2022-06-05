#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        if ((n % 3 == 0) || (n % 7 == 0))
            printf("YES\n");
        else {
            bool found = 0;
            while ((n > 0) && !found) {
                if (n % 3 == 0) found = true;
                n -= 7;
            }
            if (found)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}