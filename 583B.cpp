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

int main() {
    int n;
    cin >> n;

    int arr[n], get = 0, change = 0;
    bool flag[n];
    memset(flag, false, sizeof(flag));
    read_arr(arr, 0, n);
    int idx = 0;

    while (true) {
        if (arr[idx] <= get && !flag[idx]) {
            flag[idx] = true;
            get++;
            if (get == n) break;
        }
        if ((idx == 0 && change > 0) || idx == n-1) change++;
        idx += ((change & 1) == 1) ? -1 : 1;
    }
    cout << change << '\n';
}
