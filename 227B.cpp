#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
#define ROF(i, start, end) for(int i = end; i > start; i--)
#define FORO(i, end) for(int i = 0; i < end; i++)
#define ROFO(i, start) for(int i = start; i >= 0; i--)
#define pub push_back
#define fir first
#define sec second
#define pob pop_back
#define mp make_pair
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
  map<int, int> a;

  FORO(i, n) {
    int x;
    cin >> x;
    a[x] = i+1;
  }

  int m;
  cin >> m;

  LL aa = 0, bb = 0;

  FORO(i, m) {
    int g;
    cin >> g;

    aa += a[g];
    bb += n - a[g] + 1;
  }
  cout << aa << ' ' << bb << '\n';
}