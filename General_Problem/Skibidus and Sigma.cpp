// problem link (https://codeforces.com/contest/2065/problem/D)

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
    int n,m;
    cin>>n>>m;
    vector<vector<ll>>a(n,vector<ll>(m));
    vector<pair<ll,ll>>b(n);
    for (int i=0;i<n;i++) {
        int sum = 0;
        for (int j=0;j<m;j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
        b[i]= {sum,i};
    }
    sort(b.rbegin(),b.rend());

    int sum=0,ans=0;
    for(auto x : b){
        int i  = x.second;
        for(int j=0;j<m;j++){
            sum += a[i][j];
            ans +=  sum;
        }
    }
    cout<<ans<<ln;
}


signed main() {
    fastIO();
    ll t = 1;
    cin>>t;
    while (t--) {
        solve();
    }
}
