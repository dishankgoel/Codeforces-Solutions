#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll x,y,n;
        cin>>x>>y>>n;
        ll start = n%x;
        ll ans = 0;
        if(start >= y){
            ans = (n/x)*x + y;
        }else{
            ans = (n/x)*x - x + y;
        }
        cout<<ans<<"\n";
    }
}
