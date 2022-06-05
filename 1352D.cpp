#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    short t;
    scanf("%hd", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n], sum = 0;

        FOR(i, 0, n) {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        int a = 0, b = 0, ai = 0, bi = n-1, init = 0;
        int moves = init;

        while (sum && ai <= bi) {
            bool turn = moves & 1;
            int tmp = 0;

            if (turn) {
                // BOB
                while (tmp <= init && sum) {
                    b += arr[bi];
                    tmp += arr[bi];
                    sum -= arr[bi];
                    arr[bi] = 0;
                    bi--;
                }
            }
            else {
                // ALICE
                while (tmp <= init && sum) {
                    a += arr[ai];
                    tmp += arr[ai];
                    sum -= arr[ai];
                    arr[ai] = 0;
                    ai++;
                }
            }
            init = tmp;
            moves++;
        }
        printf("%d %d %d\n", moves, a, b);
    }
}