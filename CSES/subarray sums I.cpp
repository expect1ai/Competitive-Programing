#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
unordered_map<int,int> mp;
signed main() {
    fastio;
    int n,m;cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    // sort(v.begin(),v.end());
    int sum=0,ans=0;
    for(auto it:v) {
        sum+=it;
        if(sum==m) ans++;
        if(mp.count(sum-m)) {
            ans+=mp[sum-m];
        }
        mp[sum]++;
    }
    cout<<ans<<endl;
}