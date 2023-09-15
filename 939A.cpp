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
    int n;
    cin >> n;
    int arr[n];

    FORO(i, n) {
        int x;
        cin >> x;
        arr[i] = x-1;
    }

    bool love = false;

    for (int i = 0; i < n && !love; i++) {
        int b = arr[i], c = arr[b];

        // i -> b, b -> c, c -> i
        love = i == arr[c];
    }
    printf((love) ? "YES\n" : "NO\n");
}