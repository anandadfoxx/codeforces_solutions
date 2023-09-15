#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
#define ROF(i, start, end) for(int i = end; i > start; i--)
#define FORO(i, end) for(int i = 0; i < end; i++)
#define ROFO(i, start) for(int i = start; i >= 0; i--)
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
    
    LL aS = 0, bS = 0;

    vl e, o;
    FOR(i, 0, n) {
        LL x;
        cin >> x;

        if (x & 1) o.pub(x);
        else e.pub(x);
    }
    sort(e.begin(), e.end());
    sort(o.begin(), o.end());

    FOR(i, 0, n) {
        if (i & 1) {
            // bob odd
            if (e.empty()) {
                bS += o[o.size()-1];
                o.pob();
            }
            else if (o.empty()) e.pob();
            else if (e[e.size()-1] > o[o.size()-1]) e.pob();
            else {
                bS += o[o.size()-1];
                o.pob();
            }
        } else {
            // alice even
            if (e.empty()) o.pob();
            else if (o.empty()) {
                aS += e[e.size()-1];
                e.pob();
            }
            else if (o[o.size()-1] > e[e.size()-1]) o.pob();
            else {
                aS += e[e.size()-1];
                e.pob();
            }
        }
    }

    if (aS > bS) cout << "Alice\n";
    else if (aS < bS) cout << "Bob\n";
    else cout << "Tie\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}