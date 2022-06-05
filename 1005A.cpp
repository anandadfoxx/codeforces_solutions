#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector <int> ans;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int gh = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i]+1 == arr[i+1]) gh++;
        else {
            ans.push_back(gh+1);
            gh = 0;
        }
    }

    int ad = ans.size();

    printf("%d\n", ad);
    for (int i = 0; i < ad; i++)
        (i != ad-1) ? printf("%d ", ans[i]) : printf("%d\n", ans[i]);
}