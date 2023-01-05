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

    bool hetero = false;
    int isRL = -1;
    char prev = ' ';

    FORO(i, n) {
        char x;
        cin >> x;

        if (i == 0) {
            prev = x;
            continue;
        }

        hetero = (!hetero && (x != prev)) ? true : hetero;
        isRL = (isRL == -1 && (prev == 'L' && x == 'R')) ? i : isRL;

        prev = x;
    }

    int ans = -1;

    if (hetero) {
        ans = (isRL != -1) ? isRL : 0;
    }
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}