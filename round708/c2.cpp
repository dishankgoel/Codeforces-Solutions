#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n, k; cin>>n>>k;
        vector<ll> ans(k);
        for(int i = 0; i < k - 3; i++) {
            ans[i] = 1;
        }
        n = n - (k - 3);
        ll a,b,c;
        if(n%2 == 0) {
            if(n%4 == 0) {
                a = n/4;
                b = n/4;
                c = n/2;
            } else {
                a = 2;
                b = n/2 - 1;
                c = n/2 - 1;
            }
        } else {
            a = 1;
            b = (n - 1)/2;
            c = (n - 1)/2;
        }
        ans[k - 3] = a;
        ans[k - 2] = b;
        ans[k - 1] = c;
        for(int i = 0; i < k; i++) {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}
