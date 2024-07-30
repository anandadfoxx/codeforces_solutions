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
  set<string> ans;

  string n, tmp = "";
  getline(cin, n);

  int len = n.length();
  FORO(i, len) {
    if (n[i] >= 'a' && n[i] <= 'z') {
      tmp += n[i];
      continue;
    }
    if (tmp.length() > 0) {
      ans.insert(tmp);
      tmp = "";
    }
  }
  printf("%d\n", ans.size());
}