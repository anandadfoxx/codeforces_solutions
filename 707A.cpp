#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N, M;
    cin >> N >> M;

    bool isC = 0;
    for (int i = 1; i <= N*M; i++) {
        char F;
        cin >> F;
        if (F == 'C' || F == 'M' || F == 'Y') isC = 1;
    }

    (isC) ? printf("#Color\n") : printf("#Black&White\n");
}