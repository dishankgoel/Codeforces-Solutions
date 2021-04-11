#include<bits/stdc++.h>

using namespace std;

#define ll long long
ll p = 1000000007;
ll ways(ll n, ll k){
    ll dp[n+1];
    dp[0] = 1;
    for(int i = 1; i < n+1 ; i++){
        dp[i] = 0;
        for(int t = 1 ; t < k+1 && i - t > -1; t++){
            dp[i] = (dp[i]%p + dp[i-t]%p)%p;
        }
        // cout<<dp[i]<<" ";
    }
    // cout<<"\n";
    return dp[n];
}



int main(){
    ll n,k,d;
    cin>>n>>k>>d;
    cout<<(ways(n,k)%p - ways(n,d-1)%p + p)%p;
}