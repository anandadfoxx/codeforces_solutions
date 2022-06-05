#include <bits/stdc++.h>
using namespace std;

vector <int> Lucky;

void indexLucky() {
    for (int i = 4; i <= 1000; i++) {
        int tmp = i;
        bool lu = true;
        while (tmp > 0 && lu) {
            int tmp2 = tmp % 10;
            if (tmp2 != 4 && tmp2 != 7) lu = false;
            tmp /= 10;
        }
        if (lu) Lucky.push_back(i);
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    if (n == 0) {
        printf("NO\n");
        return 0;
    }
    indexLucky();
    int idx = 0, siz = Lucky.size();
    bool found = false;
    while (idx < siz && !found) {
        if (n % Lucky[idx] == 0) found = true;
        idx++;
    }
    (found) ? printf("YES\n") : printf("NO\n");
}