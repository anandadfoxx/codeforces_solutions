#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

char toLower(char x) {
    return (x >= 'A' && x <= 'Z') ? x - 'A' + 'a' : x;
}

char isVowel(char x) {
    return (x == 'a' || x == 'i' || x == 'u' || x == 'e' || x == 'o' || x == 'y');
}

int main() {
    string s;
    cin >> s;

    string res;
    FOR(i, 0, s.length()) {
        char l = toLower(s[i]);
        if (!isVowel(l)) res += l;
    }
    FOR(i, 0, res.length()) {
        printf(".%c", res[i]);
    }
    printf("\n");
}