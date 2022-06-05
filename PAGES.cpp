#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, p, k;
    cin >> n >> p >> k;

    int selleft = p - k;
    int selright = p + k;

    if (selleft > 1)
        printf("<< ");

    if (p - k <= 0) {
        for (int i = 1; i <= selright && (i <= n); i++) {
            if (i == p)
                printf("(%d) ", i);
            else
                printf("%d ", i);
        }
    }
    else {
        for (int i = p-k; i <= selright && (i <= n); i++) {
            if (i == p)
                printf("(%d) ", i);
            else
                printf("%d ", i);
        }
    }

    if (selright < n)
        printf(">>\n");

    
}