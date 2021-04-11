#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll k;cin>>k;
    string s;cin>>s;
    ll n = s.length();
    ll dp[n+1] = {0};
    dp[0] = 1;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            sum++;
        }
        dp[sum] = dp[sum] + 1;
    }
    ll ans = 0;
    for(int i = k; i < n+1; i++){
        if(k)
            ans += dp[i]*dp[i-k];
        else
            ans += (dp[i]*(dp[i]-1))/2;
    }
    cout<<ans;
}