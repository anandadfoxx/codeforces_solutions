#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);
        int arr[n];

        int ev = 0, od = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            (arr[i] & 1) ? od++ : ev++;
        }
        if (od > 1) {
            printf("2\n");
            int idx = 0, tmp = 2;
            while (idx < n && tmp > 0) {
                if (arr[idx] & 1) {
                    (tmp == 2) ? printf("%d", idx+1) : printf(" %d", idx+1);
                    tmp--;
                }
                idx++;
            }
            printf("\n");
        }
        else if (ev >= 1) {
            printf("1\n");
            for (int i = 0; i < n; i++) {
                if (!(arr[i] & 1)) {
                    printf("%d\n", i+1);
                    break;
                }
            }
        } else printf("-1\n");
    }
}