#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;

    int xs = 0, ys = 0, zs = 0;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        xs += x;
        ys += y;
        zs += z;
    }
    if ((xs == 0) && (ys == 0) && (zs == 0)) printf("YES\n");
    else printf("NO\n");
}