#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define FOR(i, start, end) for(LL i = start; i < end; i++)

const LL constr = 1e7;

bool primes[constr+4];

bool isPrime(LL x) {
    return primes[x];
}

void sieve() {
    primes[1] = false;
    primes[2] = true;

    FOR(i, 2, constr+2) {
        if (primes[i]) {
            LL iter = i;
            while (iter+i <= constr) {
                iter += i;
                primes[iter] = false;
            }
        }
    }
}

int main() {
    memset(primes, true, sizeof(primes));
    sieve();
    LL t;
    cin >> t;

    while (t--) {
        LL x;
        cin >> x;
        double sqRoot = sqrt((double)x);

        if (floor(sqRoot) == ceil(sqRoot) && isPrime((LL)sqRoot))
            cout << "YES\n";
        else cout << "NO\n";
    }
}