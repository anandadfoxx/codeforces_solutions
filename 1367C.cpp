#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int myceil(int a, int b) {
    return (a+b-1)/b;
}

int divider(int slot, int k, bool edgeL, bool edgeR) {
    int res = 0;
    if (!edgeL) slot -= k;
    if (!edgeR) slot -= k;
    if (slot > 0)
        res = (int)ceil((double)slot / (double)(k+1));
    else slot = 0;
    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector <int> pos;
        FOR(i, 1, n+1) {
            char w;
            cin >> w;
            if (w == '1') pos.push_back(i);
        }
        int siz = pos.size(), ans = 0;
        FOR(i, 0, siz) {
            if (i == 0) {
                ans += divider(pos[i]-1, k, true, false);
            }
            else {
                ans += divider(pos[i]-pos[i-1]-1, k, false, false);
            }
            if (i == siz-1) {
                ans += divider(n-pos[i], k, false, true);
            }
        }
        if (pos.empty()) ans = divider(n, k, true, true);
        cout << ans << '\n';
    }
}