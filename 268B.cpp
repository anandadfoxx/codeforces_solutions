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

int main() {
  int n;
  cin >> n;

  LL tot = 0;
  FOR(i, 1, n+1) {
    if (i == 1) {
      tot += n-1;
    } else if (i == n) {
      tot += n;
    } else {
      tot += (i * (n-i));
    }

  }
  cout << tot << '\n';
}