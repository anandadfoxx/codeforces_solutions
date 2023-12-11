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
  vl arr(n);

  LL sum = 0, neg = 0;
  FORO(i, n) {
    cin >> arr[i];
    if (arr[i] <= 0) {
      neg++;
      arr[i] *= -1;
    }
    sum += arr[i];
  }
  sort(arr.begin(), arr.end());
  if (neg & 1) sum -= 2 * arr[0];
  cout << sum << '\n';
}

int main() {
  int t;
  cin >> t;
  
  while (t--) {
    solve();
  }
}