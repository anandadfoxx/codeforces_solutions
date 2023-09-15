#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

bool isten(LL x) {
    int sum = 0;

    while (x) {
        sum += x % 10;
        x /= 10;
    }
    return sum == 10;
}

int main() {
    int k;
    cin >> k;

    LL ans = 19;

    while (k) {
        k -= isten(ans);
        if (k) {
            ans += 9;
        }
    }
    cout << ans << '\n';
}