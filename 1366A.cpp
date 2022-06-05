#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;

    while (t--) {
        LL s, d, ans{};
        cin >> s >> d;

        if (d < s) {
            LL us = ((s - d) <= d) ? s - d : d;
            ans += us;
            d -= us;
            s -= us << 1;
        } else if (d > s) {
            LL us = ((d - s) <= s) ? d - s : s;
            ans += us;
            s -= us;
            d -= us << 1;
        }
        if (d == s)
            ans += ((d+s) / 3);

        cout << ans << '\n';
    }
}