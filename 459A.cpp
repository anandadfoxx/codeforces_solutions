#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // Y-ALIGNED (DONE)
    if (x1 == x2) {
        int dist = y2 - y1;
        printf("%d %d %d %d\n", x1+dist, y1, x2+dist, y2);
    }

    // X-ALIGNED (DONE)
    else if (y1 == y2) {
        int dist = x2 - x1;
        printf("%d %d %d %d\n", x1, y1+dist, x2, y2+dist);
    }

    // CHECK FOR DIAGONAL ALIGNED
    else if (abs(x2-x1) == abs(y2-y1)) {
        int dist = y2 - y1;
        printf("%d %d %d %d\n", x1, y1+dist, x2, y2-dist);
    }
    else cout << -1 << '\n';
}