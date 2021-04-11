#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll m = n - k;
        if(m < 0){
            cout<<"NO\n";
        }else{
            if(m%2 == 1){
            cout<<"NO\n";
        }else{
            if(m/2 >= k*(k-1)/2){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
        }
        
    }
}