#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    scanf("%d", &n);

    int prevOne, ans = 1, maxs = -1;
    for (int i = 0; i < n; i++) {
        int current;
        scanf("%d", &current);
        if (i > 0) {
            if (prevOne <= current) ans++;
            else {
                maxs = max(maxs, ans);
                ans = 1;
            }
        }
        prevOne = current;
    }
    maxs = max(maxs, ans);
    printf("%d\n", maxs);
}