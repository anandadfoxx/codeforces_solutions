#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    scanf("%d", &n);

    int g = 2;
    for (int i = 2; i <= n; i++) {
        (i != n) ? printf("%d ", g) : printf("%d\n", g);
        if ((g + i) % n == 0) g = n;
        else g = (g+i) % n;
    }
}