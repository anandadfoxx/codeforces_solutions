#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N;
    cin >> N;
    int coin[N+5];
    int pref = 0;
    for (int i = 0; i < N; i++) {
        cin >> coin[i];
        pref += coin[i];
    }
    sort(coin, coin+N, cmp);
    int pref2 = 0;
    int i = 0;
    while (pref2 <= pref - pref2) {
        pref2 += coin[i];
        i++;
    }
    printf("%d\n", i);
}