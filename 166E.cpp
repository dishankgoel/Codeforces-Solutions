#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin>>n;
    if(n == 1){
        cout<<0;
        exit(0);
    }
    // ll dp[n+1][4];
    ll p = 1000000007;
    // dp[2][0] = 2;
    // dp[2][1] = 2;
    // dp[2][2] = 2;
    // dp[2][3] = 3;
    ll curr_a = 2;
    ll curr_b = 2;
    ll curr_c = 2;
    ll curr_d = 3;
    for(int i = 3; i < n+1; i++){
        // dp[i][0] = ((dp[i-1][1] + dp[i-1][2])%p + dp[i-1][3])%p;
        ll tmpcurr_a = ((curr_b+curr_c)%p + curr_d)%p;
        ll tmpcurr_b = ((curr_a+curr_c)%p + curr_d)%p;
        ll tmpcurr_c = ((curr_b+curr_a)%p + curr_d)%p;
        ll tmpcurr_d = ((curr_b+curr_c)%p + curr_a)%p;
        curr_a = tmpcurr_a;
        curr_b = tmpcurr_b;
        curr_c = tmpcurr_c;
        curr_d = tmpcurr_d;
        // dp[i][1] = ((dp[i-1][0] + dp[i-1][2])%p + dp[i-1][3])%p;
        // dp[i][2] = ((dp[i-1][0] + dp[i-1][1])%p + dp[i-1][3])%p;
        // dp[i][3] = ((dp[i-1][0] + dp[i-1][1])%p + dp[i-1][2])%p;
    }
    cout<<curr_d;
}