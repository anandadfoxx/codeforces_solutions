#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        int rem = sum % 9;

        if (rem == 0) {
            int div = sum / 9;

            if (min(a, min(b, c)) >= div) cout << "YES\n";
            else cout << "NO\n";
        } else cout << "NO\n";
    }
}