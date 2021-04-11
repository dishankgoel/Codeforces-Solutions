#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;cin>>t;
    while(t--){
        ll s,d;
        cin>>s>>d;
        ll ans;
        if(s == 0 or d == 0){
            ans = 0;
        }else{
            if(2*s <= d){
                ans = s;
            }else if(2*d <= s){
                ans = d;
            }else{
                if(d > s){
                    ans = max(d/2, (d+s)/3);
                }else{
                    ans = max(s/2, (d+s)/3);
                }
            }
        }
        
        cout<<ans<<"\n";


    }
}