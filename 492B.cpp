#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    LL n, l;
    scanf("%lld", &n);
    scanf("%lld", &l);

    LL lamp[n];

    for (int i = 0; i < n; i++)
        scanf("%lld", &lamp[i]);

    sort(lamp, lamp+n);

    double maxs = INT_MIN;

    for (int i = 0; i <= n; i++) {
        double dist;

        if (i == 0)
            dist = (double)lamp[i];
        else if (i == n)
            dist = (double)((l-lamp[i-1]));
        else
            dist = (double)((lamp[i]-lamp[i-1]) / 2.0);

        if (dist >= maxs)
            maxs = dist;

    }
    printf("%.10llf\n", maxs);
}