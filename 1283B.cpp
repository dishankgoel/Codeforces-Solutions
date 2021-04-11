#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;scanf("%d", &t);
    while(t--){
        ll k,n;
        cin>>k>>n;
        ll ans = 0;
        ans = (k/n)*n;
        ll mod = k%n;
        if(mod > n/2){
            mod = n/2;
        }
        ans += mod;
        cout<<ans<<"\n";
    }
}