#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;

    printf("%d\n", n);

    for (int i = 1; i <= n; i++)
        (i != n) ? printf("1 ") : printf("1\n");
}