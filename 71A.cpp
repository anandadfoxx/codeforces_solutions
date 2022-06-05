#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        string k;
        cin >> k;
        int klen = k.length();
        if (klen > 10)
            printf("%c%d%c\n", k[0], klen-2, k[klen-1]);
        else
            printf("%s\n", k.c_str());
    }
}