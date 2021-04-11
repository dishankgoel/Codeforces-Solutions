#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> h(n);
        for(int i = 0; i < n; i++) {
            cin>>h[i];
        }
        if(n == 1) {
            cout<<"YES\n";
        } else {
            int ans = 1;
            ll to_place = 0;
            for(int i = 0; i < n; i++) {
                if(h[i] < i) {
                    if(to_place >= i - h[i]) {
                        h[i] = i;
                        to_place -= i - h[i];
                    } else {
                        ans = 0;
                        break;    
                    }
                } else {
                    to_place += h[i] - i;
                    h[i] = i;
                }
            }
            if(ans) {
                cout<<"YES\n";
            } else {
                cout<<"NO\n";
            }
        }
    
    }
}
