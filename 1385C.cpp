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

        int bef = -1, end = 0, curI = -1;
        bool decrease = true;
        FOR(i, 0, n) {
            int x;
            cin >> x;

            if (bef != x) {
                if (bef < x && decrease) {
                    end = curI;
                    decrease = false;
                }
                else if (bef > x)
                    decrease = true;
                curI = i;
            }
            bef = x;
        }
        if (end == -1) end++;
        cout << end << '\n';
    }
}