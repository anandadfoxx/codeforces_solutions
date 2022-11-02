#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
#define pub push_back
#define fir first
#define sec second
#define pob pop_back
#define mp make_pair
#define read_arr(arr, start, end) for (int i = start; i < end; i++) { cin >> arr[i]; }
#define vi vector<int>
#define vl vector<long>
#define pii pair<int, int>
using namespace std;
typedef long long LL;
typedef long double LD;

void solve() {
    int n, mirdif = 0, zeros = 0;
    string s;
    cin >> n >> s;

    FOR(i, 0, (n >> 1) + 1) {
        if (s[i] != s[n-1-i])
            mirdif++;
        
        zeros += (s[i] == '0') + (s[n-1-i] == '0' && (i != n-1-i));
    }
    // 1 ALICE, 2 BOB, 3 DRAW
    int winner = -1;

    // PALINDROMED AT FIRST, ALICE ONLY WIN IF STR LEN ODD AND MID IS 0
    if (mirdif == 0) {
        if ((n & 1) && (s[n >> 1] == '0') && (n > 1 && zeros > 1)) winner = 1;
        else if (zeros > 0) winner = 2;
        else winner = 3;
    }
    switch (winner)
    {
    case 1:
        cout << "ALICE\n";
        break;
    case 2:
        cout << "BOB\n";
        break;
    case 3:
        cout << "DRAW\n";
        break;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}