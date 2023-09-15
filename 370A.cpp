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
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    // rook tinggal cek kesamaan r1 r2 c1 c2 aja
    // bishop cek diagonalnya
    // raja baru bebas

    int r = (r1 != r2) + (c1 != c2),
        b = 0,
        k = min(abs(r2-r1), abs(c2-c1)) + 
            ((abs(r2-r1) < abs(c2-c1)) ? abs(c2-c1) - abs(r2-r1) : abs(r2-r1) - abs(c2-c1));
    
    if (((r1+c1)&1) == ((r2+c2)&1)) {
        b = (abs(r2-r1) == abs(c2-c1)) ? 1 : 2;
    }
    
    printf("%d %d %d\n", r, b, k);
}