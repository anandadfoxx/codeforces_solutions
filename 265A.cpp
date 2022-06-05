#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s, t;
    getline(cin, s);
    getline(cin, t);

    int pos = 1;
    for (int i = 0; i < t.length(); i++) {
        if (s[pos-1] == t[i])
            pos++;
    }
    printf("%d\n", pos);
}