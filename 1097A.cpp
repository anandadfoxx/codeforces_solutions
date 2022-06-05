#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string table;
    cin >> table;
    bool yes = false;

    for (int i = 1; i <= 5 && (!yes); i++) {
        string card;
        cin >> card;

        for (int j = 0; j < card.length(); j++)
            if (card[j] == table[j]) {
                yes = true;
                break;
            }
    }
    if (yes)
        printf("YES\n");
    else
        printf("NO\n");
}