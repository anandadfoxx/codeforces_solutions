#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
#define ROF(i, start, end) for(int i = end; i > start; i--)
#define FORO(i, end) for(int i = 0; i < end; i++)
#define ROFO(i, start) for(int i = start; i >= 0; i--)
#define pub push_back
#define fir first
#define sec second
#define pob pop_back
#define read_arr(arr, start, end) for (int i = start; i < end; i++) { cin >> arr[i]; }
#define vi vector<int>
#define vl vector<long>
#define pii pair<int, int>
using namespace std;
typedef long long LL;
typedef long double LD;

int dp[4001];

int main() {
  int l[3];
  int n;
  cin >> n;

  read_arr(l, 0, 3);

  memset(dp, -1, sizeof(dp));
  dp[0] = 0;
  FOR(i, 1, n+1) {
    int tmpmaks = INT_MIN;
    FORO(j, 3) {
      int sl = i - l[j];
      if (sl >= 0) {
        tmpmaks = max(tmpmaks, 1 + dp[sl]);
      }
    }
    dp[i] = tmpmaks;
  }

  cout << dp[n] << '\n';
}