// problem link (https://codeforces.com/contest/2065/problem/B)

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
    int n = s.length();
    int q=0;
    for(int i =0 ;i <n;i++){
	if(s[i] == s[i+1]){
	     q=1;
	     break;	
	}    
    }
    if(q) cout<<"1"<<ln;
    else  cout<<n<<ln;
}

signed main() {
    fastIO();
    ll t = 1;
    cin>>t;
    while (t--) {
        solve();
    }
}