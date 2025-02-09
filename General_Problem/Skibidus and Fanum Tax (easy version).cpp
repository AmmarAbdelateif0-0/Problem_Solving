// problem link (https://codeforces.com/contest/2065/problem/C1)

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
    vector<ll>a(n);
    vector<ll>b(m);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=0;i<m;i++) {
        cin>>b[i];
    }
    int maxx=LLONG_MIN;
    for (int i=0;i < n;i++) {

        int q=0;
        if (a[i]>=maxx && (b[0]-a[i])>=maxx) {
            q=min(a[i],(b[0]-a[i]));
        } else if(a[i]>=maxx) {
            q=a[i];
        }else if((b[0]-a[i])>=maxx){
            q=(b[0]-a[i]);
        }else{
            cout<<"NO"<<ln;
            return;
        }
        maxx=q;

    }
    cout<<"YES"<<ln;


}


signed main() {
    fastIO();
    ll t = 1;
    cin>>t;
    while (t--) {
        solve();
    }
}
