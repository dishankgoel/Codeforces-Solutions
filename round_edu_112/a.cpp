#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n; cin>>n;
        ll ans = 0;
        if(n%2 == 0) {
            ans = n*2.5;
        } else {
            ans = (n + 1)*2.5;
        }
        if(n <= 6) {
            ans = 15;
        }
        cout<<ans<<"\n";
    }
}
