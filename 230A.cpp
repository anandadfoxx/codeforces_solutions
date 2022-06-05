#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

bool cmp(pii a, pii b) {
    return a.first < b.first;
}

int main() {
    int s, n;
    scanf("%d", &s);
    scanf("%d", &n);
    
    pii ga[n];

    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);

        ga[i] = make_pair(a, b);
    }
    sort(ga, ga+n, cmp);

    bool isOk = true;

    for (int i = 0; ((i < n) && isOk); i++) {
        if (s > ga[i].first)
            s += ga[i].second;
        else isOk = false;
    }
    (isOk) ? printf("YES\n") : printf("NO\n");
}