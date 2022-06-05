#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

bool arr[101];

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;

    for (int i = 1; i <= 2; i++) {
        int hj;
        cin >> hj;

        for (int j = 0; j < hj; j++) {
            int hk;
            cin >> hk;
            arr[hk] = 1;
        }
    }

    bool ck = 1;

    for (int i = 1; (i <= n) && ck; i++)
        if (!arr[i]) ck = 0;
    
    if (ck) printf("I become the guy.\n");
    else printf("Oh, my keyboard!\n");
}