#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

const int CONSTR = 2*1e5;
int freq[CONSTR];

int main() {
    int t;
    cin >> t;

    while (t--) {
        memset(freq, 0, sizeof(freq));

        int n, distCnt = 0, maxFreq = INT_MIN;
        cin >> n;

        FOR(i, 0, n) {
            int g;
            cin >> g;
            if (++freq[g] == 1) distCnt++;
            maxFreq = max(maxFreq, freq[g]);
        }
        int ans = 0;
        if (n > 1) {
            if (maxFreq == distCnt) ans = min(maxFreq, distCnt) - 1;
            else ans = min(maxFreq, distCnt);
        }

        cout << ans << '\n';
    }
}