#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,x;cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int i=0,j=n-1,sz=n,ans=0;
    while(i<j) {
        if(v[i]+v[j]<=x) {
            ans++;
            i++;
            j--;
            sz-=2;
        }else j--;
    }
    ans+=sz;
    cout<<ans<<endl;
}