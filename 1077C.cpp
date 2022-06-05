#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;
typedef pair <int, int> pii;

bool cmp(pii a, pii b) {
    return a.second > b.second;
}

int main() {
    int n, idxmax = -1;
    cin >> n;
    LL sum = 0;

    pii arr[n];
    vector<int> ans;
    FOR(i, 0, n) {
        int x;
        cin >> x;
        arr[i] = make_pair(i+1, x);
        sum += x;
    }
    sort(arr, arr+n, cmp);

    FOR(i, 0, n) {
        LL tmpsum = sum - arr[i].second;
        if (i == 0) {
            if (tmpsum-arr[1].second == arr[1].second) ans.push_back(arr[i].first);
        } else {
            if (tmpsum-arr[0].second == arr[0].second) ans.push_back(arr[i].first);
        }
    }
    int siz = ans.size();
    cout << siz << '\n';
    FOR(i, 0, siz) {
        if (i != siz-1)
            cout << ans[i] << ' ';
        else cout << ans[i] << '\n';
    }
}