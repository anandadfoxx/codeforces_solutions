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

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int nd = 0;
    FOR(i, 1, s.length()) {
        nd += (s[i] == s[i-1]) ? 1 : 0;
    }
    cout << nd << '\n';
}