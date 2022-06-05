#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int squ(int ww) {
    return ww * ww;
}

int main() {
    int n;
    cin >> n;

    if (n & 1) {
        int tmp = n + 2;
        cout << tmp * (tmp >> 1) + (tmp >> 1);
    }
    else
        cout << squ((n >> 1) + 1);
    
    cout << '\n';
}