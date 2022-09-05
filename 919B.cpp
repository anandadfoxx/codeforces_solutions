#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int k;
    cin >> k;

    int ans = 19;

    FOR(i, 0, k) {
        if (i % 9 == 0) {
            ans += 9 * ((i % 100) / 9);
        } else ans += 9;
    }
    cout << ans << '\n';
}