#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];

    FOR(i, 0, n) cin >> arr[i];

    int need = 0;

    FOR(i, 1, n) {
        if (arr[i-1]+arr[i] < k) {
            int add = k - (arr[i-1]+arr[i]);
            arr[i] += add;
            need += add;
        }
    }
    printf("%d\n", need);
    FOR(i, 0, n)
        printf((i != n-1) ? "%d " : "%d\n", arr[i]);
}