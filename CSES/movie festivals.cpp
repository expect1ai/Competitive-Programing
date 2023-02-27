#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
bool cmp(pii a,pii b) {
    return a.s<b.s;
}
signed main() {
    fastio;
    int n;cin>>n;
    vector<pii> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i].f>>v[i].s;
    }
    sort(v.begin(),v.end(),cmp);
    int ans=0,et=0;
    for(auto it:v) {
        if(it.f>=et) {
            ans++;
            et=it.s;
        }
    }
    cout<<ans<<endl;
}