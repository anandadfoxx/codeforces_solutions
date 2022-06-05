#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        int need = (m-1) + (m*(n-1));

        printf("%s\n", (need == k) ? "YES" : "NO");
    }
    
}