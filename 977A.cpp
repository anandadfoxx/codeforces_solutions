#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    LL n, k;
    cin >> n >> k;

    while (k--) {
        if (n % 10 != 0)
            n--;
        else
            n /= 10;
    }
    cout << n << "\n";
}