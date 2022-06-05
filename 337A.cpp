#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m;
    cin >> n >> m;
    int puzz[m+5];
    for (int i = 0; i < m; i++)
        cin >> puzz[i];
        
    sort(puzz, puzz+m, cmp);
    int mins = INT_MAX;
    for (int i = 0; (i < m && (i+n-1) < m); i++)
        mins = min(mins, (puzz[i]-puzz[i+n-1]));
        
    printf("%d\n", mins);

}