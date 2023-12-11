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

bool cmp(pair<int, string> a, pair<int, string> b) {
  return a.first < b.first;
}

void solve() {
  string t;
  cin >> t;

  // ZERO, ONE index
  vi z, o;
  vector<pair<int, string>> in;
  int added = 0;

  FORO(i, t.length()) {
    if (t[i] == '0') z.pub(i);
    else o.pub(i);
  }
  if (z.size() && o.size()) {
    FORO(i, o.size()-1) {
      if (abs(o[i] - o[i+1]) == 1) {
        // add additional 0
        in.pub({o[i+1], "0"});        
      }
    }
    FORO(i, z.size()-1) {
      if (abs(z[i] - z[i+1]) == 1) {
        // add additional 1
        in.pub({z[i+1], "1"});
      }
    }

    sort(in.begin(), in.end(), cmp);

    ROFO(i, in.size()-1) {
      t.insert(in[i].first, in[i].second);
    }
  }
  cout << t << '\n';
}

int main() {
  int n;
  cin >> n;

  while (n--) {
    solve();
  }
}