#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[105];
        int start = INT_MAX, end = INT_MIN;

        memset(arr, 0, sizeof(arr));

        for (int i = 0; i < n; i++) {
            int gg;
            scanf("%d", &gg);
            
            arr[gg]++;
            start = min(start, gg);
            end = max(end, gg);
        }

        bool checker = true;

        for (int i = start; (i <= end) && checker; i++)
            if (arr[i] <= 0) checker = false;
        
        printf("%s\n", (checker) ? "YES" : "NO");
    }
}