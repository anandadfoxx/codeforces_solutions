#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
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

bool cmp(pii a, pii b) {
    return a.sec > b.sec;
}

int main() {
    int n;
    cin >> n;
    vector<pii> ls;

    FOR(i, 0, n) {
        int pr, qu;
        cin >> pr >> qu;

        ls.pub(mp(pr, qu));
    }
    sort(ls.begin(), ls.end(), cmp);

    bool happy = false;

    for (int i = 1; i < n && !happy; i++) {
        happy = ls[i].fir > ls[i-1].fir;
    }
    printf((happy) ? "Happy Alex\n" : "Poor Alex\n");
}