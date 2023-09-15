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

int main() {
    int n;
    cin >> n;

    string a = "", b = "";
    int af = 0, bf = 0;
    while (n--) {
        string x;
        cin >> x;

        if (a == x || a == "") {
            a = x;
            af++;
        } else {
            b = x;
            bf++;
        }
    }
    cout << ((af > bf) ? a : b) << '\n';
}