#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n; cin>>n;
        if(n%2 == 0){
            cout<<n/2<<" "<<n/2;
        }else{
            ll ans = 1;
            for (ll i=1; i<=sqrt(n); i++) 
            { 
                if (n%i == 0) 
                { ans = max(ans, i);
                    // If divisors are equal, print only one 
                    // if (n/i == i) 
                    //     printf("%d ", i); 
        
                    // else // Otherwise print both 
                    //     printf("%d %d ", i, n/i); 
                } 
            }
            cout<<ans<<" "<<n-ans;
        }
        cout<<"\n";

    }
}
