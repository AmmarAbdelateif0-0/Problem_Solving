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
// 0 not visited
// 1 visited but not in recursion stack
// 2 visited and in recursion stack

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
        adj[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        cout<<adj[i].size()<<ln;
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
