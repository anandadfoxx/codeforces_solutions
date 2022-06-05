#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N, K;
    cin >> N >> K;
    int arr[N+1];

    for (int i = 0; i < N; i++) 
        cin >> arr[i];

    int idxleft = 0;
    int idxright = N-1;

    while (arr[idxleft] <= K && idxleft < N) idxleft++;
    while (arr[idxright] <= K && idxright > idxleft) idxright--;

    printf("%d\n", idxleft-1+(N-idxright));

}