#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){
        ll n,x; cin>>n>>x;
        int a[n];
        int all_divide = 1;
        ll su = 0;
        for(int i = 0 ;i < n; i++){
            cin>>a[i];
            su += a[i];
            if(a[i]%x != 0){
                all_divide = 0;
            }
        }
        if(su%x == 0){
            ll start = -1;
            for(int i = 0 ; i < n; i++){
                if(a[i]%x != 0){
                    start = i;
                    break;
                }
            }
            ll end = -1;
            for(int i = n-1; i >= 0; i--){
                if(a[i]%x != 0){
                    end = i;
                    break;
                }
            }
            if(all_divide){
                cout<<-1<<"\n";
            }else{
                cout<<max(n-start-1, end)<<"\n";
            }
        }else{
            cout<<n<<"\n";
        }
    }
}