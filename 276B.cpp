#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    string s;
    cin >> s;

    int freq[26], len = s.length();
    memset(freq, 0x0, sizeof(freq));

    FOR(i, 0, len) {
        freq[s[i]-'a']++;
    }
    int cnt = 0;
    FOR(i, 0, 26)
        cnt += (freq[i] & 1);

    if (cnt > 0) cnt--;
    printf((cnt & 1) ? "Second\n" : "First\n");
}