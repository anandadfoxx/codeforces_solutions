#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, d = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == 'A') a++;
        else if (s[i] == 'D') d++;
    
    if (a > d) printf("Anton\n");
    else if (a < d) printf("Danik\n");
    else printf("Friendship\n");
}