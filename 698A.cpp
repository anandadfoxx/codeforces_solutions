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
#define read_arr(arr, start, end) for (int i = start; i < end; i++) { scanf("%d", &arr[i]); }
#define vi vector<int>
#define vl vector<long>
#define pii pair<int, int>
using namespace std;
typedef long long LL;
typedef long double LD;

// odd number means contest carried out
// result of number / 2, 1 means gym open, 0 means closed
// knapsack problem

bool isContest(int x) {
    return (x & 1) == 1;
}

bool isGym(int x) {
    return (x >> 1) == 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int d[n], rest = 0;
    char dp[n];


    read_arr(d, 0, n);

    FORO(i, n) {
        if (i == 0) {
            // evaluate when d[0] = 3, then we can not rest here
            if (d[i] == 3) {
                dp[i] = 'x';
            }
            else if (d[i] == 1)
                dp[i] = 'c';
            else if (d[i] == 2)
                dp[i] = 'g';
            else if (d[i] == 0) {
                rest++;
                dp[i] = 'r';
            }
        }
        else {
            char b = dp[i-1];

            if (b == 'c') {
                if (!(isGym(d[i]))) {
                    rest++;
                    dp[i] = 'r';
                } else dp[i] = 'g';
            } else if (b == 'g') {
                if (!(isContest(d[i]))) {
                    rest++;
                    dp[i] = 'r';
                } else dp[i] = 'c';
            } else {
                if (d[i] == 3) {
                    dp[i] = 'x';
                }
                else if (d[i] == 1)
                    dp[i] = 'c';
                else if (d[i] == 2)
                    dp[i] = 'g';
                else if (d[i] == 0) {
                    rest++;
                    dp[i] = 'r';
                }
            }
        }
        // printf("i: %d | %c\n", i, dp[i]);
    }
    printf("%d\n", rest);
}