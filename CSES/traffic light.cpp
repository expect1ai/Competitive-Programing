#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int x,n;cin>>x>>n;
    set<int> lights{0,x};
    multiset<int> dis{x};
    for(int i=0;i<n;i++) {
        int p;cin>>p;
        auto a=lights.upper_bound(p);
        auto b=a;b--;
        dis.erase(dis.find(*a-*b));
        dis.insert(p-*b);
        dis.insert(*a-p);
        lights.insert(p);
        auto ans=dis.end();
        ans--;
        cout<<*(ans)<<endl;
    }
}