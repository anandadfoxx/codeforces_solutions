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

  string flow[n];
  set<string> ls;

  FORO(i, n) {
    cin >> flow[i];
    ls.insert(flow[i]);
  }

  FORO(i, n) {
    string tmp = flow[i];
    int len = tmp.length();
    bool find = false;
    FORO(j, len-1) {
      string l = tmp.substr(0, j+1);
      string r = tmp.substr(j+1, len-(j+1));
      if (ls.find(l) != ls.end() && ls.find(r) != ls.end()) {
        find = true;
        break;
      }
    }
    printf("%d", find);
  }

  printf("\n");
}

int main() {
  int t;
  cin >> t;

  while (t--) solve();
}