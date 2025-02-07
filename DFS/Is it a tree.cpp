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
vector<int>vis;


void DFS(int u ) {
    // in recursion stack
    vis[u] = 1;
    for (auto v: adj[u]) {

        if ( !vis[v] ) {
            DFS(v);
        }

    }
}
void solve() {
    int n,m;
    cin>> n >> m;
    
    adj.resize(n+1,{});
    vis.resize(n+1,false);
    
    for (int i = 0; i < m; i++) {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }

    int ans = 0;
    for ( int i=1; i<=n; i++) {
        if (!vis[i]) {
            DFS(i);
            ans++;
        }
    }
    cout<<((ans ==1  && m==n-1)?"YES":"NO");

}


signed main() {
    fastIO();
    ll t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
}
v