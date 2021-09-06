#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        string ans = s;
        for(int i = 0; i < n;i++) {
            if(s[i] == 'U') {
                ans[i] = 'D';
            } else if(s[i] == 'D') {
                ans[i] = 'U';
            }
        }
        cout<<ans<<"\n";
    }
}
