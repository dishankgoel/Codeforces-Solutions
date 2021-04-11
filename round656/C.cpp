#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[n];
        for(int i = 0; i < n ; i++){
            cin>>a[i];
        }
        ll ans = n-1;
        ll curr = 1;
        for(int i = n -1; i > 0; i--){
            if(curr == 1){
                if(a[i-1] >= a[i]){
                }else{
                    curr = 0;
                }
            }else{
                if(a[i-1] <= a[i]){
                }else{
                    ans = i;break;
                }
            }
        }
        if(ans == n-1){
            cout<<0<<"\n";
        }else{
            cout<<ans<<"\n";
        }
        
    }
}
