#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int n,x;cin>>n>>x;
    vector<int> v(n+1);
    unordered_map<int,int> mp;
    for(int i=1;i<=n;i++) {
        cin>>v[i];
        mp[v[i]]=i;
    }
    for(int i=1;i<=n;i++) {
        if(mp.count(x-v[i])) {
            if(mp[x-v[i]]==i) continue;
            cout<<i<<' '<<mp[x-v[i]]<<endl;
            return 0;
        }
    }
    puts("IMPOSSIBLE");
}