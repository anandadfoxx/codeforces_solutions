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
    int n;
    cin >> n;
    int arr[n];
    bool flag[n];
    read_arr(arr, 0, n);
    memset(flag, false, sizeof(flag));

    // SCAN FROM MSB INTO LSB
    LL ans = 0;
    for (int i = 30; i >= 0; i--) {
        LL cnt = 0;
        FOR(j, 0, n) {
            if ((((1 << i) & arr[j]) != 0) && !flag[j]) {
                cnt++;
                flag[j] = true;
            }
        }
        if (cnt > 1) ans += (cnt * (cnt-1)) >> 1;
    }
    cout << ans << '\n';
}

int main() {
    short x;
    cin >> x;

    while (x--) solve();
}