#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    ll n1 = a;
    ll n2 = min(b,c);
    ll ans = 0;
    if(e > f){
        if(d > n1){
            ans = n1*e + min(n2,(d - n1))*f;
        }else{
            ans = d*e;
        }
    }else{
        if(d > n2){
            ans = n2*f + min(n1,(d - n2))*e;
        }else{
            ans = d*f;
        }
    }
    cout<<ans;


}