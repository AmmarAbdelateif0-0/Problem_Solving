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

vector<vector<int>>adj;

void solve() {
    int n,m;
    cin>> n >> m;
    vector<int>deg(n+1,0);
    
    adj.resize(n+1,{});

    for (int i = 0; i < m; i++) {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        deg[x]++;
        deg[y]++;
    }
    int cd1=0,cd2=0,star=0;
    for ( int i=1; i<=n; i++) {
        if ( deg[i]==1 ) cd1++;
        else if ( deg[i]==2 ) cd2++;
        else if ( deg[i]== n-1 ) star++;
    }

    if (cd2 == n and m == n) {
        cout<<"ring topology"<<ln;
    }else if (cd1==2 and cd2 == n-2 and m == n-1) {
        cout<<"bus topology"<<ln;
    }else if (star==1 and cd1==n-1 and m == n-1 ) {
        cout<<"star topology"<<ln;
    }else {
        cout<<"unknown topology"<<ln;
    }
}


signed main() {
    fastIO();
    ll t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
}
