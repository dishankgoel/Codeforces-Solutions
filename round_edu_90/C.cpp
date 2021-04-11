#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        ll n = s.size();
        ll su = 0;
        ll prev_su = 0;
        ll ans = 0;
        for(int i = 0;i < n; i++){
            if(s[i] == '+'){su++;}
            else{su--;}
            if(su < 0 && su < prev_su){
                prev_su = su;
                ans += i+1;
            }
        }
        cout<<ans+n<<"\n";
    }
}