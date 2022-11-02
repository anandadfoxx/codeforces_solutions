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
    LL a, b;
    cin >> a >> b;

    LL mn = ceil((double)a/(double)b) * b;
    cout << mn - a << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}