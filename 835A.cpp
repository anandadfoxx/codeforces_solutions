#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;

    int frs = (s * v1) + (2 * t1);
    int scnd = (s * v2) + (2 * t2);

    if (frs < scnd)
        printf("First\n");
    else if (frs > scnd)
        printf("Second\n");
    else printf("Friendship\n");
}