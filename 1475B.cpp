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

#define DP 1000006

int dp[DP];

int valid(int x) {
  if (x == 2020 || x == 2021) dp[x] = 1;
  else if (x < 2020) dp[x] = 0;

  if (dp[x] != -1) return dp[x];
  dp[x] = valid(x-2020) || valid(x-2021);
  return dp[x];
}

void solve() {
  int n;
  cin >> n;

  printf(((valid(n) == 1) ? "YES\n" : "NO\n"));
}

int main() {
  int t;
  cin >> t;

  memset(dp, -1, sizeof(dp));

  while (t--) solve();
}