#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        int ans = 0;
        if (h >= 2 && h <= 7) printf("1\n");
        
        else {
            ans += h / 5;
            if (h % 5 >= 2) ans++;
            printf("%d\n", ans);
        }
    }
}