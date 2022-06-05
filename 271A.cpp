#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

bool doCheck(int val) {
    bool digits[10];
    memset(digits, false, sizeof(digits));

    while (val > 0) {
        if (!digits[val % 10]) {
            digits[val % 10] = true;
            val /= 10;
        } else return false;
    }
    return true;
}

int main() {
    int y;
    scanf("%d", &y);
    y++;

    while (true) {
        if (!doCheck(y))
            y++;
        else {
            printf("%d\n",  y);
            return 0;
        }
    }    
}