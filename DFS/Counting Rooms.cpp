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


vector<vector<bool>> vis;
vector<vector<char>>grid;

int n,m;

// dx 1 right , -1 left
// dy 1 up    , -1 down

vector<int>dx={1,-1,0,0};
vector<int>dy={0,0,-1,1};

void DFS(int x,int y) {
    vis[x][y]=true;
    for (int i=0;i<4;i++) {
        int nx= x + dx[i];
        int ny= y + dy[i];
        if (nx>=1 && nx<=n && ny>=1 && ny<=m && grid[nx][ny]=='.' && !vis[nx][ny]) {
            DFS(nx,ny);
        }
    }

}
void solve() {
    cin>>n>>m;
    vis.resize(n+1,vector<bool>(m+1,false));
    grid.resize(n+1,vector<char>(m+1,' '));
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin>>grid[i][j];
        }
    }

    int count_room=0;
    
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(grid[i][j]=='.' and !vis[i][j]) {
                DFS(i,j);
                count_room++;
            }
        }
    }
    cout<< count_room <<ln;
}


signed main() {
    fastIO();
    ll t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
}
