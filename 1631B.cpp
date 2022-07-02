#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int freq[200001]{0}, lmos = -1;
        vector<pair<int, int>> distinct;
        int conc[n], arr[n];

        
        FOR(i, 0, n) {
            int x;
            cin >> x;
            arr[i] = x;
            freq[x]++;
            if (i == 0) {
                conc[i] = 1;
                distinct.push_back(make_pair(x, i));
            }
            else if (x == distinct[distinct.size()-1].first) conc[i] = conc[i-1] + 1;
            else {
                distinct.push_back(make_pair(x, i));
                conc[i] = 1;
            }
        }

        for (int i = 0; i < distinct.size() && lmos == -1; i++) {
            if (distinct[i].first != arr[n-1])
                lmos = distinct[i].second;
        }

        int end_idx = n-conc[n-1], mult = conc[n-1];

        int cnt = 0;

        while (end_idx >= 0 && lmos != -1) {
            if (arr[end_idx] == arr[n-1]) {
                end_idx--;
                continue;
            }
            end_idx -= n-end_idx-1;
            cnt++;
        }

        cout << cnt << '\n';
    }
}