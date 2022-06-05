#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    long long int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1')
            ans += a1;
        else if (s[i] == '2')
            ans += a2;
        else if (s[i] == '3')
            ans += a3;
        else if (s[i] == '4')
            ans += a4;
    }
    printf("%d\n", ans);
}