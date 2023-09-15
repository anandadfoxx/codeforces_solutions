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

int main() {
    int t, n;
    cin >> n >> t;

    int arr[n];

    read_arr(arr, 0, n);

    // malas binser, linear ajah h3h3, two pointers
    int l = 0, r = 0, tmp = 0, maxs = 0;

    while (r < n) {
        tmp += arr[r++];
        while (tmp > t) {
            tmp -= arr[l++];
        }
        maxs = max(maxs, r-l);
    }
    cout << maxs << '\n';
}