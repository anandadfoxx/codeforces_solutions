#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;

    printf("%d\n", n/2);
    
    if (n % 2 == 0) {
        for (int i = 1; i <= n/2; i++)
            (i == n/2) ? printf("2\n") : printf("2 ");
    }
    else {
        for (int i = 1; i < n/2; i++)
            printf("2 ");
        printf("3\n");
    }
}