#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool g = false;
    vector <int> bla;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'B') {
            if (!g) {
                bla.push_back(1);
                g = true;
            }
            else
                bla[bla.size()-1]++;
        }
        else if (s[i] == 'W')
            g = false;
    }
    int ans = bla.size();

    printf("%d\n", ans);
    for (int i = 0; i < ans; i++)
        (i != ans-1) ? printf("%d ", bla[i]) : printf("%d\n", bla[i]);
}