#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, h;
    cin >> n >> h;
    int sum = 0;

    while (n--) {
        int a;
        cin >> a;

        sum += (a <= h) ? 1 : 2;
    }
    cout << sum << "\n";
}