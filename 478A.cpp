#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int sum = 0;
    FOR(i, 0, 5) {
        int g;
        cin >> g;
        sum += g;
    }
    printf("%d\n", (sum % 5 || sum == 0) ? -1 : sum / 5);
}