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

string bitConvert(int x) {
    string s = "";
    while (x > 0) {
        s += (x & 1) + '0';
        x >>= 1;
    }
    string fin = "";

    ROFO(i, s.length()-1) {
        fin += s[i];
    }
    return fin;
}

int diffs(string a, string b) {
    int len = max(a.length(), b.length());
    
    int df = 0;
    FOR(i, 1, len+1) {
        int aI = a.length() - i;
        int bI = b.length() - i;

        if (aI < 0) {
            df += b[bI] == '1';
        } else if (bI < 0) {
            df += a[aI] == '1';
        } else {
            df += a[aI] != b[bI];
        }
    }
    return df;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    string arr[m+1];

    FORO(i, m+1) {
        int x;
        cin >> x;
        arr[i] = bitConvert(x);
    }

    int friends = 0;
    FORO(i, m) {
        friends += (diffs(arr[i], arr[m]) <= k) ? 1 : 0;
    }
    cout << friends << '\n';
}