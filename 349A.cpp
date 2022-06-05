#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int n;
    cin >> n;

    int chg25 = 0, chg50 = 0;
    bool able = true;
    FOR(i, 0, n) {
        int val;
        cin >> val;
        if (val == 25) chg25++;
        else if (val == 50) {
            if (chg25 < 1) able = false;
            else chg25--;

            chg50++;
        }
        else if (val == 100) {
            if (!(chg25 >= 3 || (chg25 >= 1 && chg50 >= 1))) able = false;
            else {
                if (chg50 >= 1 && chg25 >= 1) {
                    chg50--;
                    chg25--;
                }
                else if (chg25 >= 3) chg25 -= 3;
            }
        }
    }
    printf((able) ? "YES\n" : "NO\n");
}