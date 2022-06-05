#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, v;
    n = 4, v = 6;
    // cin >> n >> v;
    int money = 0;
    int pos = 1;
    int tank = 0;
    
    if (n > v) {
        while (pos < n) {
            int tmbh = v-tank;
            tank += tmbh;
            money += tmbh*pos;
            if (tank == n-pos) break;
            pos++;
            tank--;
        }
        printf("%d\n", money);
    } else
        printf("%d\n", n-1);
}