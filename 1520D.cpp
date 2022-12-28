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

bool cmp(pii a, pii b) {
    return a.sec < b.sec;
}

void solve() {
    int n, ans = 0;
    cin >> n;

    int freqs[450006];
    LL maxs = 0;
    memset(freqs, 0, sizeof(freqs));

    FORO(i, n) {
        int x;
        cin >> x;
        // 200000 for adding minus index
        int id = x-i + 200005;
        freqs[id]++;
        if (freqs[id] > 1) maxs += freqs[id] - 1;
    }
    cout << maxs << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}