#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    int x = 0;

    int A = 0,
        notA = 0;
    
    for (int i = 0; i < s.length(); i++)
        s[i] == 'a' ? A++ : notA++;
    
    while (A <= notA) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != 'a') {
                s.erase(i, 1);
                notA--;
                break;
            }
        }
    }
    cout << s.length() << "\n";
}