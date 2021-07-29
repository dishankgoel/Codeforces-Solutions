#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n; cin>>n;
        ll a[n];
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        ll ans = 0;
        for(int i = 0; i < n - 1; i++) {
            ans = max(ans, a[i]*a[i + 1]);
        }
        cout<<ans<<"\n";
    }
}
