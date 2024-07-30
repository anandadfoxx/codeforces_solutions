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
  string s;
  cin >> s;

  int slen = s.length(), i = 0;

  vi wubIdx;

  while (i < slen) {
    if (s.substr(i, 3) == "WUB") {
      wubIdx.pub(i);
      i += 3;
      continue;
    }
    i++;
  }

  ROFO(x, wubIdx.size()-1) {
    s.erase(wubIdx[x], 3);
    if (s.substr(wubIdx[x], 1) != " ") s.insert(s.begin()+wubIdx[x], ' ');
  }

  while (s.substr(0, 1) == " ") s.erase(0, 1);
  cout << s << '\n';
}