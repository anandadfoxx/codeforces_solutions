#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N;
    scanf("%d", &N);

    int a[N], p[N];
    int ans = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < N; i++) {
        ans += a[i]*p[i];
        int tmp = i+1;
        while (tmp < N && p[i] < p[tmp]) {
            ans += a[tmp]*p[i];
            tmp++;
        }
        i = tmp-1;
    }
    printf("%d\n", ans);
}