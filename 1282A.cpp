#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;scanf("%d", &t);
    while(t--){
        ll a,b,c,r;
        cin>>a>>b>>c>>r;
        if( b < a){
            ll tmp = a;
            a = b;
            b = tmp;
        }
        ll x2 = c + r;
        ll x1 = c - r;
        ll ans = 0;
        if(a < x2){
            if(b > x1){
                if(b > x2){
                    if(a > x1){
                        ans = x2 - a;
                    }else{
                        ans = x2 - x1;
                    }
                }else{
                    if(a > x1){
                        ans = b - a;
                    }else{
                        ans = b - x1;
                    }
                }
            }
        }
        cout<<(b-a) - ans<<"\n";
    }
}