#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    short n;
    cin >> n;

    cout << ((n & 1) ? 0 : 1 << (n/2)) << '\n';
}