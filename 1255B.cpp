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
    int n, m;
    cin >> n >> m;

    int arr[n];
    read_arr(arr, 0, n);

    // harus cyclic

    if (m != n || n <= 2) printf("-1\n");
    else {
        int cost = 0;

        FORO(i, n) {
            cost += arr[i%n] + arr[(i+1)%n];
        }
        printf("%d\n", cost);
        FORO(i, n) {
            printf("%d %d\n", (i%n)+1, ((i+1)%n)+1);
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) solve();
}