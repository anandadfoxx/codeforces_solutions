#include <bits/stdc++.h>
using namespace std;

// GAS BRUTEFORCE
// INI CERITANYA NYARI JUMLAH FAKTOR - 1

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int ans = 0;

    for (int i = 1; i < n; i++)
        if (n % i == 0)
            ans++;
    cout << ans << "\n";
}