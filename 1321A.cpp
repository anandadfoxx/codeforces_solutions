#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    scanf("%d", &n);
    int r[n];
    int b[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &r[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    
    int p[n];

    memset(p, 0, sizeof(p));
    int rscore = 0, 
        bscore = 0;

    int hope = 0;
    for (int i = 0; i < n; i++) {
        if (r[i] > b[i]) hope++;
        if (r[i] == 0 && b[i] == 1)
            p[i] = 1;
        
        if (r[i] & b[i])
            rscore += p[i];

        bscore += b[i]*p[i];
    }
    if (hope > 0)
        printf("%d\n", (bscore-rscore + hope) / hope);
    
    else printf("-1\n");
}