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
  LL n;
  cin >> n;

  LL cnt = 0;
  if (((n % 3) == 0)) {
    while (n != 1) {
      if ((n % 6) != 0) n <<= 1;
      else n /= 6;
      cnt++;
      if (n == 1) break;
      float res = log((double)n) / log(2.0);
      if ((LL)ceil(res) == (LL)floor(res)) {
        printf("-1\n");
        return;
      }
    }
    printf("%lld\n", cnt);
    return;
  } else if (n == 1) {
    printf("0\n");
    return;
  }
  printf("-1\n");
}

int main() {
  int t;
  cin >> t;

  while (t--) solve();
}