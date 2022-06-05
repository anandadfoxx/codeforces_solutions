#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if (n > 2) {
            if (n % 2 == 0)
                printf("0\n");
            else printf("1\n");
        } else printf("2\n");
    }
}