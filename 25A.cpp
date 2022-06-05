#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    short n;
    scanf("%hd", &n);

    vector<short> mo[2];

    memset(mo, 0, sizeof(mo));

    FOR(i, 1, n+1) {
        short g;
        scanf("%hd", &g);
        mo[g % 2].push_back(i);
    }
    if (mo[0].size() == 1) printf("%hd\n", mo[0][mo[0].size()-1]);
    else if (mo[1].size() == 1) printf("%hd\n", mo[1][mo[1].size()-1]);
}