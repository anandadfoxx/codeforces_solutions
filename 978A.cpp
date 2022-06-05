#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    set <int> a;
    int n;
    cin >> n;
    int arr[n];
    stack <int> ans;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = n-1; i >= 0; i--) {
        if (a.count(arr[i]) == 0) {
            a.insert(arr[i]);
            ans.push(arr[i]);
        }
    }
    printf("%d\n", ans.size());
    while (!ans.empty()) {
        (ans.size() > 1) ? printf("%d ", ans.top()) : printf("%d\n", ans.top());
        ans.pop();
    }
}