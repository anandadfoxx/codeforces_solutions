#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    string s;
    cin >> n >> s;

    (s[0] == 'S' && s[n-1] == 'F') ? cout << "YES" << "\n" : cout << "NO" << "\n";
}