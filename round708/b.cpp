#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n, m; cin>>n>>m;
        vector<ll> a(n);
        vector<ll> remdiv(m);
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            remdiv[a[i]%m]++;
        }
        int ans = 0;
        for(int i = 0; i < m/2 + 1; i++) {
            int x = remdiv[i];
            int y = remdiv[(m - i)%m];
            int p = max(x, y);
            int q = min(x, y);
            ans += p - q;
            if(p == q && p != 0) {
                ans += 1;
            }
        }
        cout<<ans<<"\n";
    }
}
