#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

// SIMPLE SLIDING WINDOW

int main() {
    int n, k;
    cin >> n >> k;

    int tmpidx = 0, tmp = 0, ansidx, mins = INT_MAX;
    int arr[n];
    
    FOR(i, 0, n) {
        cin >> arr[i];
        tmp += arr[i];
        if (i >= k-1) {
            tmp -= arr[i-k];
            if (mins > tmp) {
                ansidx = i - k + 1;
                mins = tmp;
            }
        }
    }
    cout << ansidx+1 << '\n';
}