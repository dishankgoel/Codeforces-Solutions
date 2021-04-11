#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n,m; cin>>n>>m;
        ll a[n], b[m];
        unordered_map<int, int> d;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            d[a[i]] = 1;
        }
        ll ans = -1;
        for(int i = 0; i < m ; i++){
            cin>>b[i];
            if(d.find(b[i]) != d.end()){
                ans = b[i];
            }
        }
        if(ans == -1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
            cout<<"1 "<<ans<<"\n";
        }

    }
}
