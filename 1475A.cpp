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
    LL n;
    cin >> n;

    if ((n & 1) == 1) printf("YES\n");
    else {
        while (n > 0 && (n & 1) == 0) n >>= 1;
        printf(((n & 1) == 1 && n != 1) ? "YES\n" : "NO\n");
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) solve();
}