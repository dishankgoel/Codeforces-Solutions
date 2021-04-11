#include<bits/stdc++.h>
#define ll long long

using namespace std;

int func(ll k1, ll k2, ll domi) {
    int ans = 1;
    if(domi == 0) {
        return 1;
    }
    ll extra = max(k1, k2) - min(k1, k2);
    // if(extra%2 == 1) {
    //     ans = 0;
    // } else {
    //     if(domi > extra/2 + min(k1, k2)) {
    //         ans = 0;
    //     }
    // }
    ll total = min(k1, k2) + extra/2;
    if(domi > total) {
        ans = 0;
    } 
    return ans;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n, k1, k2; cin>>n>>k1>>k2;
        ll w, b; cin>>w>>b;
        int ans = func(k1, k2, w) && func(n - k1, n - k2, b);
        if(ans) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    
    }
}
