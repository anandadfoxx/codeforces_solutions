#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int dp[100001], freq[100001];

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    int dif = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
        if (freq[arr[i]] == 1) dif++;
    }

    for (int i = 0; i < n; i++) {
        freq[arr[i]]--;
        dp[i] = dif;
        if (freq[arr[i]] <= 0) dif--;
    }

    for (int i = 0; i < m; i++) {
        int g;
        scanf("%d", &g);
        printf("%d\n", dp[g-1]);
    }
}