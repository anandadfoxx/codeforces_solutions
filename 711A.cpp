#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    string arr[n];
    bool dapat = false;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        for (int j = 0; j < 5; j += 3) {
            if ((arr[i][j] == 'O') && (arr[i][j+1] == 'O')) {
                if (!dapat) {
                    arr[i][j] = '+';
                    arr[i][j+1] = '+';
                }
                dapat = true;
            }
        }
    }

    if (dapat) {
        cout << "YES" << "\n";
        
        for (int i = 0; i < n; i++)
            cout << arr[i] << "\n";
    }
    else
        printf("NO\n");    
}