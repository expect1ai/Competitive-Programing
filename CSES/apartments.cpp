#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,m,k;cin>>n>>m>>k;
    vector<int> v(n),a(m);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<m;i++) cin>>a[i];
    sort(v.begin(),v.end());sort(a.begin(),a.end());
    int i=0,j=0,ans=0;
    while(i<n && j<m) {
        if(abs(v[i]-a[j])<=k) {
            i++;
            j++;
            ans++;
        }else if(a[j]>v[i]) i++;
        else if(a[j]<v[i]) j++;
    }
    cout<<ans<<endl;
}