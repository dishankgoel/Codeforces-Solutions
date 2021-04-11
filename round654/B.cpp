#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll ans = 0;
        ll n,r;cin>>n>>r;
        ll val = min(n,r);
        if(n > r){
            val = r;   
            ans = ((val*(val + 1))/2);
        }else{
            val = n;   
            ans = ((val*(val - 1))/2) + 1;
        }
        
        cout<<ans<<"\n";

    }
}
