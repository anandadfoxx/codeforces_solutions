#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;

    while (t--) {
        LL n;
        cin >> n;

        n >>= 1;

        LL sum = 0;

        for (LL i = 1; i <= n; i++) sum += i * i;

        cout << 8 * sum << '\n';
    }
}