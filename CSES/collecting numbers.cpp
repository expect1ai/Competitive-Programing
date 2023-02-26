#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int n,ans=1;cin>>n;
    vector<int> v(n+1),pos(n+1);
    for(int i=1;i<=n;i++) {
        cin>>v[i];
        pos[v[i]]=i;
    }
    for(int i=2;i<=n;i++) {
        if(pos[i]<pos[i-1]) ans++;
    }
    cout<<ans<<endl;
}