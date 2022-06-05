#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;

    while (a > 0) {
        if (b >= a*2 && c >= a*4) {
            printf("%d\n", a+(a*2)+(a*4));
            return 0;
        } else a--;
    }
    printf("0\n");
}