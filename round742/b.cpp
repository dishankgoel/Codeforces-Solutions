#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    ll x[(int)1e6];
    x[0] = 0;
    for(int i = 1; i < 1e6; i++) {
        x[i] = x[i - 1]^i;
    }
    while(t--){
        ll a,b; cin>>a>>b;
        ll toform = x[a - 1]^b;
        ll ans = a;
        if(toform == 0) {

        } else if(toform == a) {
            ans += 2;
        } else {
            ans += 1;
        }
        cout<<ans<<"\n";
    
    }
}
