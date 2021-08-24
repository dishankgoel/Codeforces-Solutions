#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll a,b,c;cin>>a>>b>>c;
        ll npos = abs(b - a)*2;
        ll op1 = npos/2 + c;
        ll op2 = c - (npos/2);
        ll ans = c > npos/2 ? op2 : op1;
        if(a <= npos && b <= npos && c <= npos && ans <= npos) {
            cout<<ans<<"\n";
        } else {
            cout<<"-1\n";
        }
    }
}
