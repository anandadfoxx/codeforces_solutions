#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin >> T;

    while (T--) {
        float a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;

        int x = (int)(ceil(a/c));
        int y = (int)(ceil(b/d));

        if (x + y <= k) printf("%d %d\n", x, y);
        else printf("-1\n");
    }
}