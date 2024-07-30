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

void solve() {
  int n;
  cin >> n;

  LL dp[n];
  LL tot = 0, maxx = INT_MIN;
  int maxIdx = -1;
  bool seps = false;

  FORO(i, n) {
    int x;
    cin >> x;
    tot += x;
    if (i == 0) {
      if (x < 0) {
        dp[i] = 0;
        seps = true;
      }
      else dp[i] = x;
    } 
    else {
      if (((x < 0) && dp[i-1] > -x) || (x >= 0)) {
        dp[i] = dp[i-1] + x;
      } else {
        seps = true;
        dp[i] = 0;
      }
    }
    if (dp[i] > maxx) {
      maxx = dp[i];
      maxIdx = i;
    }
  }
  bool valid = (tot > maxx && maxIdx != n-1) || (maxIdx == n-1 && tot >= maxx && !seps);
  printf((valid) ? "YES\n" : "NO\n");
}

int main() {
  int t;
  cin >> t;

  while (t--) solve();
}