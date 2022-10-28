/*
CC
1
4
4 5 3 3
*/

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
    read_arr(arr, 0, n);
    sort(arr, arr+n);

    int rems[2], diff = 0;
    memset(rems, 0, sizeof(rems));
    FOR(i, 0, n) {
        rems[arr[i]%2]++;
        if (i > 0 && arr[i]-arr[i-1] == 1) diff++;
    }
    // printf("out : %d %d %d\n", diff, rems[0], rems[1]);
    rems[0] %= 2;
    rems[1] %= 2;
    bool ok = true;
    if (rems[0] || rems[1]) ok = diff >= min(rems[0], rems[1]);
    
    printf((ok) ? "YES\n" : "NO\n");
}

int main() {
    int t;
    cin >> t;
    
    while (t--) solve();
}