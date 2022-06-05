#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    string s;
    cin >> n >> s;
    int x = s.find("xxx"), ans = 0;

    while (x != -1) {
        s.erase(x, 1);
        ans++;
        x = s.find("xxx");
    }
    printf("%d\n", ans);
}