#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll x,y,z;
        cin>>x>>y>>z;
        if(y == z && x <= y){
            cout<<"YES\n";
            cout<<1<<" "<<x<<" "<<y<<"\n";
        }else if(x == z && y <= x){
            cout<<"YES\n";
            cout<<1<<" "<<y<<" "<<x<<"\n";
        }else if(x == y && z <= x){
            cout<<"YES\n";
            cout<<1<<" "<<z<<" "<<x<<"\n";
        }else{
            cout<<"NO\n";
        }
    }
}
