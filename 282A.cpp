#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    int t, x = 0;
    scanf("%d", &t);

    while (t--) {
        string s;
        cin >> s;

        if (s == "X++")
            x++;
        else if (s == "X--")
            x--;
        else if (s == "++X")
            ++x;
        else if (s == "--X")
            --x;
    }
    printf("%d\n", x);
}