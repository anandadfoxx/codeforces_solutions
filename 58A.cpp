#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;
    string pt = "hello";
    int idx = 0, len = N.length();

    for (int i = 0; i < len; i++) {
        if (N[i] == pt[idx])
            idx++;
    }
    if (idx < 5)
        printf("NO\n");
    else
        printf("YES\n");
}