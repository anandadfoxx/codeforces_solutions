#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int sum = a;
    int rem;
    while (a >= b) {
        sum += a / b;
        rem = a % b;
        a /= b;
        a += rem;
    }
    cout << sum << '\n';
}