#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        double a;
        cin >> a;
        int i = 3;
        bool ans = false;
        while (((180 * (double)(i-2)) / (double)i) <= a && !ans) {
            if (((180 * (double)(i-2)) / (double)i) == a) ans = true;
            i++;
        }
        printf((ans) ? "YES\n" : "NO\n");
    }
}