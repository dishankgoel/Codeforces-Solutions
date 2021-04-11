#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;cin>>t;
    while(t--){
        ll ans = 1;
        ll n,x,m;
        cin>>n>>x>>m;
        ll curr_min = x;
        ll curr_max = x;
        for(int i = 0 ; i < m; i++){
            ll l,r;
            cin>>l>>r;
            if(l <= curr_min && r >= curr_max){
                ans += (curr_min - l) + (r - curr_max);
                curr_max = r;
                curr_min = l;
            }else if(l >= curr_min && r >= curr_max && l <= curr_max){
                ans += r - curr_max;
                curr_max = r;
            }else if(l <= curr_min && r <= curr_max && r >= curr_min){
                ans += curr_min - l;
                curr_min = l;
            }
        }
        cout<<ans<<"\n";

    }
}