#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a, b;
    cin >> a >> b;

    int le = 0,
        rig = 0;

    if (a < b) {
        le += a;
        b -= a;
        a -= a;
    }
    else {
        le += b;
        a -= b;
        b -= b;
    }

    rig += a / 2;
    rig += b / 2;
    
    printf("%d %d\n", le, rig);
}