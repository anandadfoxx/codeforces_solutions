#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;

    while (t--) {
        LL a, b, x, y;
        cin >> x >> y;
        cin >> a >> b;

        LL sp = abs(x-y);

        cout << min(a * (x + y), min(a * sp + b * min(x, y), a * sp + b * max(x, y))) << '\n';
    }
}