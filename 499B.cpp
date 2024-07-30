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

string minLen(string a, string b) {
  return (a.length() > b.length()) ? b : a;
}

int main() {
  int n, m;
  scanf("%d %d", &n, &m);

  string a[m], b[m];

  FORO(i, m) {
    cin >> a[i] >> b[i];
  }
  queue<string> speak, ans;

  FORO(i, n) {
    string s;
    cin >> s;
    speak.push(s);
  }

  while (!speak.empty()) {
    string f = speak.front();

    FORO(i, m) {
      if (f == a[i] || f == b[i]) {
        ans.push(minLen(a[i], b[i]));
      }
    }
    speak.pop();
  }

  while (!ans.empty()) {
    string buf = ans.front();
    ans.pop();
    printf((ans.size() > 0) ? "%s " : "%s\n", buf.c_str());
  }
}