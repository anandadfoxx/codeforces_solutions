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
    int a[n], b[n], pa = n, na = n;
    FOR(i, 0, n) {
        cin >> a[i];
        if (pa == n && a[i] > 0) pa = i;
        else if (na == n && a[i] < 0) na = i;
    }
    read_arr(b, 0, n);
    bool vld = true;

    for (int i = n-1; i >= 0; i--) {
        if (a[i] > b[i] && na >= i) vld = false;
        else if (a[i] < b[i] && pa >= i) vld = false;
    }
    printf((vld) ? "YES\n" : "NO\n");
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}