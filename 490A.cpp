#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    scanf("%d", &n);

    stack <int> one, two, three;
    for (int i = 1; i <= n; i++) {
        int h;
        scanf("%d", &h);
        if (h == 1) one.push(i);
        else if (h == 2) two.push(i);
        else if (h == 3) three.push(i);
    }
    int minv = min(min(one.size(), two.size()), three.size());

    printf("%d\n", minv);

    for (int i = 0; i < minv; i++) {
        printf("%d ", one.top());
        printf("%d ", two.top());
        printf("%d\n", three.top());
        one.pop();
        two.pop();
        three.pop();
    }
}