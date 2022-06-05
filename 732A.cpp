#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int k, r;
    scanf("%d %d", &k, &r);

    int i = 1;

    while ((k*i) % 10 != 0 && (k*i) % 10 != r) i++;

    printf("%d\n", i);
}