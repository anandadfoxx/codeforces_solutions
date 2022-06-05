#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    LL tc;
    cin >> tc;

    while (tc--) {
        LL a, b, k;
        cin >> a >> b >> k;
        LL odd = (k % 2 == 0) ? k / 2 : (k/2) + 1, even = k / 2;
        cout << (odd*a) - (even*b) << "\n";
    }
}