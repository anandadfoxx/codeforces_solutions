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

float C(float n, float r) {
    float u = 1, d = 1;
    FOR(i, 1, r+1) {
        u *= n-(i-1);
        d *= i;
    }
    return u / d;
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int ap = 0, an = 0, bp = 0, bn = 0, len = s1.length();

    FORO(i, len) {
        ap += s1[i] == '+';
        an += s1[i] == '-';
        bp += s2[i] == '+';
        bn += s2[i] == '-';
    }

    float ans = (float)(ap == bp && an == bn);

    if (ans == 0.0 && len != (bp+bn)) {
        int que = len-(bp+bn);
        if (!(que+bp < ap || que+bn < an)) {
            ans = C(que, ap-bp) / (float)pow(2, que);
        }
    }

    printf("%.12f\n", ans);
}