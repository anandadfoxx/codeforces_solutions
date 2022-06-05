#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int m = 0,
        c = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        if (a > b)
            m++;
        else if (a < b)
            c++;
    }
    if (m > c)
        printf("Mishka\n");
    else if (m < c)
        printf("Chris\n");
    else 
        printf("Friendship is magic!^^\n");
}