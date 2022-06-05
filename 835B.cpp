#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    LL n;
    string k;
    LL pre = 0;

    cin >> n >> k;

    int en = k.length();
    for (int i = 0; i < en; i++)
        pre += (k[i] - '0');

    sort(k.begin(), k.end());
    int idx = 0, ans = 0;
    while (pre < n && idx < en) {
        if (9 - (k[idx] - '0') > 0) {
            pre += 9 - (k[idx] - '0');
            ans++;
        }
        idx++;
    }
    printf("%d\n", ans);
}