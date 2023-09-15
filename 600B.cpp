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

int n, m;
int binser(LL* arr, int l, int r, LL x) {
  int mid = ((l+r) >> 1) + 1;

  while (l < r) {
    mid = ((l+r) >> 1) + 1;
    if (x >= arr[mid]) {
      l = mid + 1;
    } else if (x < arr[mid]) {
      r = mid - 1;
    }
  }
  mid = (l+r) >> 1;
  return mid + (arr[mid] <= x);
}

int main() {
    cin >> n >> m;

    LL arr[n];
    read_arr(arr, 0, n);
    sort(arr, arr+n);

    while (m--) {
      LL x;
      cin >> x;

      printf(((m > 0) ? "%d " : "%d\n"), binser(arr, 0, n-1, x));
    }
}