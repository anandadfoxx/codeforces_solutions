#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;

    if ((m - n >= 0) && (k - n >= 0))
        printf("Yes\n");
    else   
        printf("No\n");
}