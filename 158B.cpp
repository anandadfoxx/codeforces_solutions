#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int n;
    cin >> n;

    int arr[5] = {0, 0, 0, 0, 0};

    while (n--) {
        int g;
        cin >> g;
        arr[g]++;
    }

    int ans = arr[4];
    arr[4] = 0;

    // 3 1
    int tmp = min(arr[3], arr[1]);
    ans += tmp;
    arr[3] -= tmp;
    arr[1] -= tmp;

    // 2 2
    tmp = arr[2] / 2;
    ans += tmp;
    arr[2] -= 2 * tmp;

    // 2 1 1
    tmp = min((int)ceil((double)(arr[1] / 2.0)), arr[2]);
    ans += tmp;
    arr[2] -= tmp;
    arr[1] -= 2 * tmp;

    ans += arr[3] + arr[2] + ceil((double)arr[1] / 4.0);

    printf("%d\n", ans);
}