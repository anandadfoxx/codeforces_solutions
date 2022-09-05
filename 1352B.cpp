#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> res;

    if (k <= n) {
        if ((n % k) == 0) {
            FOR(i, 0, k)
                res.push_back(n/k);
        }
        else if ((n & 1) && (k & 1)) {
            while (k) {
                res.push_back((k > 1) ? 1 : n);
                n--; k--;
            }
        }
        else {
            if (k & 1 && (k << 1 <= n)) {
                while (k) {
                    res.push_back((k > 1) ? 2 : n);
                    n -= 2; k--;
                }
            }
            else if ((n - (k-1)) & 1) {
                while (k) {
                    res.push_back((k > 1) ? 1 : n);
                    n--; k--;
                }
            }
        }
    }

    if (!res.empty()) {
        printf("YES\n");
        int len = res.size();

        FOR(i, 0, len) {
            printf((i != len-1) ? "%d " : "%d\n", res[i]);
        }
    }
    else printf("NO\n");
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}