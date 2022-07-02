#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        double arr[n];

        FOR(i, 0, n) cin >> arr[i];

        sort(arr, arr+n);

        int st = n;
        double sum = 0;

        while ((sum + arr[st-1]) / (n-st+1) >= x && st > 0) {
            sum += arr[--st];
        }
        cout << n-st << '\n';
    }
}