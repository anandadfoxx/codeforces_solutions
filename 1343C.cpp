#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        LL sum = 0, temp = 0;
        bool negative_flag = false;

        FOR(i, 0, n) {
            LL x;
            cin >> x;

            if (i == 0) temp = x;
            else if (x < 0) {
                if (temp > 0) {
                    sum += temp;
                    temp = x;
                }
                temp = max(temp, x);
            }
            else if (x > 0) {
                if (temp < 0) {
                    sum += temp;
                    temp = x;
                }
                temp = max(temp, x);
            }
        }
        if (temp != 0) {
            sum += temp;
            temp = 0;
        }
        cout << sum << '\n';
    }
}