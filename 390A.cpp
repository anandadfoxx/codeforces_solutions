#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    set <int> a;
    set <int> b;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int g, h;
        cin >> g >> h;

        if (a.count(g) == 0)
            a.insert(g);
        if (b.count(h) == 0)
            b.insert(h);
    }
    cout << min(a.size(), b.size()) << '\n';
}