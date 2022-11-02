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
    int n, k;
    cin >> n >> k;
    vi arr;
    FOR(i, 0, n) {
        int x;
        cin >> x;
        if (x & 1) arr.pub(i+1);
    }
    int spre = arr.size() - k;
    if ((spre >= 0) && !(spre & 1)) {
        cout << "YES\n";
        int len = arr.size();
        FOR(i, spre, len) {
            printf((i != len-1) ? "%d " : "%d\n", (i != len-1) ? arr[i] : n);
        }
    } else printf("NO\n");
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}