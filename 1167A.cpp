#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;

    while (n--) {
        int t;
        cin >> t;
        string d;
        cin >> d;
        int g = d.find('8');
        if ((t - g >= 11) && (g != -1))
            printf("YES\n");
        else printf("NO\n");
    }
}