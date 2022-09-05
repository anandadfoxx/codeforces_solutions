#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        FOR(i, 0, n)
            cin >> arr[i];

        int maks = INT_MIN;
        FOR(s, 2, (2*n)+1) {
            int tmp = 0;
            bool acq[n];
            memset(acq, false, sizeof(acq));

            FOR(j, 0, n) {
                if (!(acq[j])) {
                    FOR(k, j+1, n) {
                        if ((!(acq[k])) && ((arr[j]+arr[k]) == s)) {
                            tmp++;
                            acq[j] = acq[k] = true;
                            break;
                        }
                    }
                }
            }
            maks = max(maks, tmp);
        }
        cout << maks << '\n';
    }
}