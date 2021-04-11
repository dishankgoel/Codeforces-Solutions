#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll a,b,n,m;cin>>a>>b>>n>>m;
        int ans = 0;
        if(a > b){
            if(m > b){
                ans = 0;
            }else{
                if(a + b - m >= n){
                    ans = 1;
                }else{
                    ans = 0;
                }
            }
        }else{
            if(m > a){
                ans = 0;
            }else{
                if(b + a - m >= n){
                    ans = 1;
                }else{
                    ans = 0;
                }
            }
        }
        if(ans){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
}
