#include <bits/stdc++.h>
using namespace std;

string s;
int e = 0, z = 0, o = 0, r = 0, n = 0;

int checkOne() {
    int one = 0;
    while ((o > 0) && (n > 0) && (e > 0)) {
        one++;
        o--;
        n--;
        e--;
    }
    return one;
}

int checkZero() {
    int zero = 0;
    while ((z > 0) && (r > 0) && (e > 0) && (o > 0)) {
        zero++;
        r--;
        o--;
        z--;
        e--;
    }
    return zero;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int fuk;
    cin >> fuk;
    cin >> s;

    for (int i = 0; i < fuk; i++) {
        if (s[i] == 'z') z++;
        else if (s[i] == 'e') e++;
        else if (s[i] == 'r') r++;
        else if (s[i] == 'o') o++;
        else if (s[i] == 'n') n++;
    }
    int ja = checkOne();
    int jb = checkZero();

    for (int i = 1; i <= ja+jb; i++) {
        if (i != ja+jb)
            if (i > ja)
                printf("0 ");
            else printf("1 ");
        else
            if (i > ja)
                printf("0\n");
            else printf("1\n");
    }
}