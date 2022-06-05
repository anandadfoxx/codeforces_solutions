#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        int da;
        cin >> da;

        arr[da-1] = i+1;
    }

    for (int i = 0; i < n-1; i++)
        printf("%d ", arr[i]);

    printf("%d\n", arr[n-1]);
}