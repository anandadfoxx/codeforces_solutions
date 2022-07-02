#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > 1 && b > 1 && c > 1) cout << a * b * c << '\n';
    else if (a == 1 && c == 1) cout << a + b + c << '\n';
    else {
        if (a == 1 || (b == 1 && c > a)) cout << (a + b) * c << '\n';
        else if (c == 1 || (b == 1 && a >= c)) cout << a * (b + c) << '\n';
    }
}