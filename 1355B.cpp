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
    int N;
    cin >> N;
    int arr[N];

    read_arr(arr, 0, N);
    sort(arr, arr+N);

    int poi = 1, freq = 0, ans = 0;

    FORO(i, N) {
        ans += freq / poi;
        if ((freq / poi) > 0) freq = 0;
        poi = arr[i];

        freq++;
    }
    ans += freq / poi;
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    
    while (t--) solve();
}