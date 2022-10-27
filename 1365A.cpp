#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
#define pub push_back
#define fir first
#define sec second
#define pob pop_back
#define mp make_pair
#define read_arr(arr, start, end) for (int i = start; i < end; i++) { cin >> arr[i]; }
#define vi vector<int>
#define vl vector<long>
#define pii pair<int, int>
using namespace std;
typedef long long LL;
typedef long double LD;

void solve() {
    int n, m;
    cin >> n >> m;
    int r = n, c = m;

    bool cond[n][m], clmr[n], clmc[m];
    memset(clmr, false, sizeof(clmr));
    memset(clmc, false, sizeof(clmc));
    FOR(x, 0, n) read_arr(cond[x], 0, m);

    FOR(i, 0, n) {
        FOR(j, 0, m) {
            if (cond[i][j]) {
                if (!clmr[i]) {
                    clmr[i] = true;
                    r--;
                }
                if (!clmc[j]) {
                    clmc[j] = true;
                    c--;
                }
            }
        }
    }
    printf((min(r, c) & 1) ? "Ashish\n" : "Vivek\n");
}

int main() {
    int t;
    cin >> t;
    
    while (t--) solve();
}