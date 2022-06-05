#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;

    while (n--) {
        int b, p, f;
        cin >> b >> p >> f;
        int h, c;
        cin >> h >> c;
        int h2 = 0,
            c2 = 0;
        if (h > c) {
            while ((p > 0) && (b > 1)) {
                h2++;
                p--;
                b -= 2;
            }
            while ((f > 0) && (b > 1)) {
                c2++;
                f--;
                b -= 2;
            }
        } else {
            while ((f > 0) && (b > 1)) {
                c2++;
                f--;
                b -= 2;
            }
            while ((p > 0) && (b > 1)) {
                h2++;
                p--;
                b -= 2;
            }
        }
        printf("%d\n", (h * h2) + (c * c2));
    }
}