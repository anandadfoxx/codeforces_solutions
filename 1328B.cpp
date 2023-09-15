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
    int n, k;
    cin >> n >> k;

    int b[2];
    b[0] = n-2, b[1] = n-1;

    int tmp = k-1, step = 1;

    while (tmp >= step) {
        tmp -= step++;
        b[0]--;
    }
    if (tmp) {
        b[1] -= tmp;
        tmp = 0;
    }

    FORO(i, n) {
        bool isB = (i == b[0]) || (i == b[1]);

        cout << ((isB) ? 'b' : 'a');
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}