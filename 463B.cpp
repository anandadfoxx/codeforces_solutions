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

  LL arr[n];
  LL need = 0, ene = 0;
  FORO(i, n) {;
    cin >> arr[i];

    if (i == 0) {
      need = arr[i];
    } else {
      ene += arr[i-1] - arr[i];
      if (ene < 0) {
        need += -ene;
        ene = 0;
      }
    }
  }
  cout << need << '\n';
}