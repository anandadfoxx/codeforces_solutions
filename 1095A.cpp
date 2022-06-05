#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    string s;
    cin >> n >> s;
    int a = 1;

    for (int i = 0; i < n; i += a) {
        printf("%c", s[i]);
        a++;
    }
    printf("\n");
}