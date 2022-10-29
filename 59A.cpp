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

char toLower(char x) {
    return (x >= 'A' && x <= 'Z') ? x - 'A' + 'a' : x;
}

char toUpper(char x) {
    return (x >= 'a' && x <= 'z') ? x - 'a' + 'A' : x;
}

int main() {
    string s;
    cin >> s;

    int up = 0, lo = 0;

    FOR(i, 0, s.length()) {
        if (s[i] >= 'A' && s[i] <= 'Z') up++;
        else lo++;
    }

    if (up > lo) {
        FOR(i, 0, s.length()) {
            s[i] = toUpper(s[i]);
        }
    } else {
        FOR(i, 0, s.length()) {
            s[i] = toLower(s[i]);
        }
    }
    cout << s << '\n';
}