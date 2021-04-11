#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t,k;
    cin>>t>>k;
    ll p = 1000000007;
    ll n = 100000;
    ll dp[n+1];
    for(int i=0; i < k; i++){
        dp[i] = 1;
    }
    for(int i = k; i < n+1; i++){
        dp[i] = (dp[i-k]%p + dp[i-1]%p + p)%p;
    }
    ll presum[n+1];
    presum[0] = dp[0];
    for(int i = 1; i < n+1; i++){
        presum[i] = (presum[i-1]%p + dp[i]%p + p)%p;
    }
    while(t--){
        ll a,b;cin>>a>>b;
        cout<<(presum[b]%p - presum[a-1]%p + p)%p<<"\n"; 
    }
}