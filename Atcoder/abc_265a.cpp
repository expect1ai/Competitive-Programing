#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int x,y,n;cin>>x>>y>>n;
    if(3*x>=y) cout<<(n/3)*y+(n%3)*x<<'\n';
    else cout<<n*x<<'\n';
}