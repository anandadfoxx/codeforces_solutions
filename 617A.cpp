#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, ans = 0;
    cin >> n;

    while (n > 0) {
        if (n >= 5)
            n -= 5;
        else if (n >= 4)
            n -= 4;
        else if (n >= 3)
            n -= 3;
        else if (n >= 2)
            n -= 2;
        else if (n >= 1)
            n -= 1;

        ans++;
    }
    cout << ans << "\n";
}