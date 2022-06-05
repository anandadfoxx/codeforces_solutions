#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

void solve() {
    int n;
    scanf("%d", &n);
    int fact[3] = {-1, -1, -1}, factIdx = 0;

    for (int i = 2; i <= sqrt((double)n)+1 && factIdx < 3; i++) {
        if (n % i == 0) {
            if (factIdx == 0) fact[factIdx] = i;
            else if (n / i != fact[factIdx-1]) fact[factIdx] = i;
            else break;
            n /= i;
            factIdx++;
            if (factIdx == 2 && n != fact[factIdx-1]) {
                fact[factIdx] = n;
                factIdx++;
            }
        }
    }
    if (factIdx >= 3) {
        printf("YES\n");
        FOR(i, 0, 3)
            printf((i != 2) ? "%d " : "%d\n", fact[i]);
    }
    else printf("NO\n");
}

int main() {
    short t;
    scanf("%hd", &t);

    while (t--) solve();
}