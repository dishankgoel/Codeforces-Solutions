#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll m; cin>>m;
        ll a1[m], a2[m];
        ll pre1[m], pre2[m];
        for(int i = 0; i < m; i++) {
            cin>>a1[i];
            if(i == 0) {pre1[0] = a1[0];}
            else {pre1[i] = pre1[i - 1] + a1[i];}
        }
        for(int i = 0; i < m; i++) {
            cin>>a2[i];
            if(i == 0) {pre2[0] = a2[0];}
            else {pre2[i] = pre2[i - 1] + a2[i];}
        }
        ll ans = 1e15;
        for(int i = 0; i < m; i++) {
            ll curr;
            if(i != 0)
                curr = max(pre1[m - 1] - pre1[i], pre2[i - 1]);
            else
                curr = pre1[m - 1] - pre1[i];
            ans = min(ans, curr);
        }
        cout<<ans<<"\n";
    }
}
