#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s, a = "", b = "";
        cin >> s;

        bool oneFlag = false;
        FOR(i, 0, n) {
            int r = s[i] - '0';

            if (r == 0) {
                a += '0';
                b += '0';
            }
            else if (r == 1) {
                if (oneFlag) {
                    a += '0';
                    b += '1';
                }
                else {
                    a += '1';
                    b += '0';
                }
                oneFlag = true;
            } else if (r == 2) {
                if (oneFlag) {
                    a += '0';
                    b += '2';
                } else {
                    a += '1';
                    b += '1';
                }
            }
        }
        printf("%s\n%s\n", a.c_str(), b.c_str());
    }
}