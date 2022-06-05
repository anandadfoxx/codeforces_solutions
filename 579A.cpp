#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int x;
    scanf("%d", &x);

    int ans = 0;
    while (x > 0) {
        ans += x & 1;
        x >>= 1;
    }
    printf("%d\n", ans);
}