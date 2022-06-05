#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    LL t;
    cin >> t;

    while (t--) {
        LL n;
        cin >> n;
        LL moves = 0, coins = 0;
        while (n > 0) {
            if (moves & 1) {
                // NOT JONI
                if (n & 1) {
                    n--;
                } else {
                    if ((n % 4) == 0 && n > 8) {
                        n--;
                    } else n -= n >> 1;
                }
            } else {
                // JONI
                if (n & 1) {
                    coins++;
                    n--;
                } else {
                    if ((n % 4) == 0 && n > 8) {
                        coins++;
                        n--;
                    } else {
                        coins += n >> 1;
                        n -= n >> 1;
                    }
                }
            }
            moves++;
        }
        cout << coins << '\n';
    }
}