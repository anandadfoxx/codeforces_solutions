#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;

    while (t--) {
        string ha;
        cin >> ha;

        int len = ha.length(), total = 0, gh = 0;

        for (int i = 0; i < len; i++) {
            if (i < len-1) {
                if (ha[i] == '1' && ha[i+1] == '0') {
                    int j = i;
                    while (ha[j+1] == '0') j++;
                    if (j < len-1) gh += j-i;
                    i = j;
                }
            }
        }
        printf("%d\n", gh);
    }
}
