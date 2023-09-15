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

void reverser(string& target) {
    string rev;

    ROFO(i, target.length()-1) {
        rev += target[i];
    }
    target = rev;
}

int main() {
    int m, s;
    cin >> m >> s;
    string sm, la;

    if (s > 9*m || (s == 0 && m > 1)) {
        printf("-1 -1\n");
        return 0;
    } else if (s == 0 && m == 1) {
        printf("0 0\n");
        return 0;
    }

    // find smallest first
    int tm = m, ts = s;
    while (tm) {
        int adder;
        if (ts <= 1) {
            adder = (tm == 1) ? 1 : 0;
        } else {
            adder = (ts > 9) ? 9 : ts - 1 + (tm == 1);
        }
        sm += '0' + adder;
        ts -= adder;
        tm--;
    }

    // find largest
    tm = m, ts = s;
    while (tm) {
        int adder;
        if (ts <= 1) {
            adder = (ts) ? 1 : 0;
        } else {
            adder = (ts >= 9) ? 9 : ts;
        }
        la += '0' + adder;
        ts -= adder;
        tm--;
    }

    reverser(sm);
    cout << sm << ' ' << la << '\n';
}