#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int freqans[26];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    string ans[n];
    int scores[m];

    for (int i = 0; i < n; i++)
        cin >> ans[i];
    for (int i = 0; i < m; i++)
        cin >> scores[i];

    LL anss = 0;
    for (int i = 0; i < m; i++) {
        int tempmax = INT_MIN;
        memset(freqans, 0, sizeof(freqans));

        for (int j = 0; j < n; j++) {
            freqans[ans[j][i] - 'A']++;
            if (freqans[ans[j][i] - 'A'] > tempmax)
                tempmax = freqans[ans[j][i] - 'A'];
        }
        anss += tempmax * scores[i];
    }
    printf("%I64d\n", anss);
}