#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int arr[2];
        memset(arr, 0, sizeof(arr));

        FOR(i, 0, n) {
            int g;
            cin >> g;
            arr[g & 1]++;
        }
        bool valid = arr[1] >= x && (x & 1);

        for (int i = 1; i <= arr[0] && i < x; i++)
            if (arr[1] >= x-i && (x-i) & 1) valid = true;

        printf((valid) ? "Yes\n" : "No\n");
    }
}