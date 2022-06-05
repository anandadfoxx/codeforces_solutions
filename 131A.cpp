#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

char toLower(char x) {
    if (x >= 'A' && x <= 'Z')
        return (x - 'A') + 'a';
    
    return x;
}

char toUpper(char x) {
    if (x >= 'a' && x <= 'z')
        return (x - 'a') + 'A';
    
    return x;
}

int main() {
    string s;
    cin >> s;

    int len = s.length();

    bool capsTrig = true;
    for (int i = 0; i < len; i++) {
        if ((i > 0) && s[i] >= 'a' && s[i] <= 'z')
            capsTrig = false;
    }

    if (capsTrig) {
        for (int i = 0; i < len; i++) {
            printf("%c", (s[i] >= 'A' && s[i] <= 'Z') ? toLower(s[i]) : toUpper(s[i]));
        }
    } else printf("%s", s.c_str());
    printf("\n");
}