#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int cur=v[0],ans=v[0];
    for(int i=1;i<n;i++) {
        cur+=v[i];
        if(cur<0 || v[i]>cur) cur=v[i];
        ans=max(ans,cur);
    }
    cout<<ans<<endl;
}