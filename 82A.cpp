#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    LL n;
    cin >> n;

    // LL start = 1;
    int iter = ceil(log2(((double)n/5)+1));

    n -= 5 * (pow(2, iter-1) - 1);

    switch ((LL)ceil((double)n / (LL)pow(2, iter-1))) {
    case 1:
        printf("Sheldon\n");
        break;
    case 2:
        printf("Leonard\n");
        break;
    case 3:
        printf("Penny\n");
        break;
    case 4:
        printf("Rajesh\n");
        break;
    case 5:
        printf("Howard\n");
        break;
    }
}