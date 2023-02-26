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
    unordered_set<int> st;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<endl;
}