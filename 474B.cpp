#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int n;

int search(LL* arr, LL x) {
    int l = 0, r = n-1;

    while (l <= r) {
        int m = (l + r) >> 1;

        if (x > arr[m]) l = m + 1;
        else {
            if (x > arr[m-1] && x <= arr[m] || (m == 0 || m == n-1)) return m;
            else r = m - 1;
        }
    }
    return -1;
}

int main() {
    cin >> n;
    
    LL cnt = 0, arr[n];

    FOR(i, 0, n) {
        int x;
        cin >> x;
        cnt += x;
        arr[i] = cnt;
    }

    int m;
    cin >> m;

    while (m--) {
        LL q;
        cin >> q;
        cout << search(arr, q) + 1 << '\n';
    }
}