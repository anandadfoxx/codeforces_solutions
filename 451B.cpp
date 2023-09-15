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

void reverse(int* arr, int l, int r) {
    int s = r-l+1;
    int tmp[s];
    FOR(i, l, r+1) {
        tmp[i-l] = arr[i];
    }

    FOR(i, l, r+1) {
        arr[i] = tmp[s-(i-l)-1];
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    read_arr(arr, 0, n);


    int l = -1, r = -1, segs = 0;
    bool inDesc = false;

    FOR(i, 1, n) {
        if (arr[i] < arr[i-1]) {
            if (!inDesc) {
                inDesc = true;
                l = i-1;
                segs++;
            }
            r = i;
        } else if (arr[i] > arr[i-1]) {
            inDesc = false;
        }
    }
    if (l != -1 && r != -1 || segs <= 1) {
        int arr2[n];
        
        memcpy(arr2, arr, sizeof(arr));
        sort(arr2, arr2+n);
        reverse(arr, l, r);

        bool ident = true;

        for (int i = 0; i < n && ident; i++) {
            ident = arr[i] == arr2[i];
        }

        if (segs < 1) {
            r = 0;
            l = 0;
        }
        if (ident) printf("yes\n%d %d\n", l+1, r+1);
        else printf("no\n");
    } else printf("no\n");
}