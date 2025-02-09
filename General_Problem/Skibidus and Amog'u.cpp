// problem link(https://codeforces.com/contest/2065/problem/A)

#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
typedef long long ll;
#define int ll
const ll MODE=1000000007;


void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


void solve() {
    string s;
    cin>>s;
    string w = s.substr(0, s.length() - 2) + "i";
    cout<<w<<"\n";
}


signed main() {
    fastIO();
    ll t = 1;
    cin>>t;
    while (t--) {
        solve();
    }
}
