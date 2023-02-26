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
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int x=v[n/2];
    int ans=0;
    for(auto i:v) ans+=abs(i-x);
    cout<<ans<<endl;
}