#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
#define ROF(i, start, end) for(int i = end; i > start; i--)
#define FORO(i, end) for(int i = 0; i < end; i++)
#define ROFO(i, start) for(int i = start; i >= 0; i--)
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

char flipper(char x, int amo) {
    bool flip = amo & 1;
    if (flip) {
        return (x == 'R') ? 'B' : 'R';
    }
    else {
        return (x == 'R') ? 'R' : 'B';
    }
}

void solve() {
    int n, lastCharPos;
    cin >> n;
    string s;
    char lastChar = ' ';

    cin >> s;

    FORO(i, n) {
        if (s[i] != '?') {
            // flood fill sebelah kiri
            lastCharPos = i;
            lastChar = s[i];
            bool red = (s[i] == 'R');
            int tmp = i - 1;
            while (tmp >= 0 && s[tmp] == '?') {
                red = !red;
                s[tmp] = (red) ? 'R' : 'B';
                tmp--;
            }
        }
    }
    ROFO(i, n-1) {
        if (s[i] == '?') {
            // flood fill sebelah kiri
            bool red = flipper(lastChar, i-lastCharPos+1) == 'R';
            int tmp = i;
            while (tmp >= 0 && s[tmp] == '?') {
                red = !red;
                s[tmp] = (red) ? 'R' : 'B';
                tmp--;
            }
        }
    }
    cout << s << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}

// counter case
// 1
// 4
// BB??
// BBBR
// should be BBRB