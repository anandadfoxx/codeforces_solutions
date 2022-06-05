#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;

    while (t--) {
        LL v, c, n, m;
        cin >> v >> c >> n >> m;
        bool happy = false;

        if (v+c >= n+m) {
            
        }
        printf("RES : %lld %lld %lld %lld\n", v, c, n, m);
        printf((happy) ? "Yes\n" : "No\n");
    }
}