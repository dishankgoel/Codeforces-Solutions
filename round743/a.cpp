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
        int to_change = 0;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] != '0') {
                to_change++;
                ans += s[i] - '0';
            }
        }

        ans += to_change;
        if(s[n - 1] != '0') {
            ans--;
        }
        cout<<ans<<"\n";

    }
}
