#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        FOR(i, 0, n) cin >> arr[i];

        bool ans = false;

        for (int i = 0; i < n-2 && !ans; i++) {
            for (int j = i+2; j < n && !ans; j++) {
                ans = arr[i] == arr[j];
            }
        }
        
        cout << ((ans) ? "YES\n" : "NO\n");
    }
}