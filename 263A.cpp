#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int arr[5][5],
        posi, posj;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                posi = i;
                posj = j;
            }
        }
    }
    int ans = 0;
    while (posj != 2) {
        if (posj < 2) {
            arr[posi][posj] = 0;
            arr[posi][posj+1] = 1;
            posj++;
        }
        else {
            arr[posi][posj] = 0;
            arr[posi][posj-1] = 1;
            posj--;
        }
        ans++;
    }

    while (posi != 2) {
        if (posi < 2) {
            arr[posi][posj] = 0;
            arr[posi+1][posj] = 1;
            posi++;
        }
        else {
            arr[posi][posj] = 0;
            arr[posi-1][posj] = 1;
            posi--;
        }
        ans++;
    }

    cout << ans << "\n";
}