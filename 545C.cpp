#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;cin>>n;
    vector<pair<ll, ll>> xh;
    for(int i=0; i < n;i++){
        ll x,h;cin>>x>>h;
        xh.push_back(pair<int, int>(x,h));
    }
    // int dp[n][3];
    // ll curr_left = xh[0].first;
    // dp[0][0] = 1;
    // dp[0][1] = 0;
    // dp[0][2] = 0;
    // for(int i = 1; i < n; i++){
    //     for(int j=0; j < 3; j++){
    //         if(xh[i].first - xh[i].second > curr_left){
    //             dp[i]
    //         }
    //     }
    // }
    ll ans = 1;
    ll curr_left = xh[0].first;
    for(int i=1; i < n-1 ;i++){
        if(xh[i].first - xh[i].second > curr_left){
            ans++;
            curr_left = xh[i].first;
        }else if(xh[i].first + xh[i].second < xh[i+1].first){
            ans++;
            curr_left = xh[i].first + xh[i].second;
        }else{
            curr_left = xh[i].first;
        }
    }
    if(n>1){
        ans++;
    }
    cout<<ans;
}