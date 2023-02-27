#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
map<pair<int,int>,int> mp;
signed main() {
    fastio;
    int n,r;cin>>n>>r;
    while(n--) {
        int x,y;cin>>x>>y;
        for(int i=x-r;i<=x+r;i++) {
            for(int j=y-r;j<=y+r;j++) {
                if((x-i)*(x-i)+(y-j)*(y-j)<=r*r) {
                    mp[{i,j}]++;
                }
            }
        }
    }
    int ans=0;
    for(auto it:mp) {
        if(it.second&1) ans++;
    }
    cout<<ans<<'\n';
}