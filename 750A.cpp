#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll n,k;
    cin>>n>>k;
    ll total_time_left = 240 - k;
    ll presum[n];
    presum[0] = 5;
    for(int i = 1 ; i < n; i++){
        presum[i] = presum[i-1] + 5*(i+1);
    }
    ll t = lower_bound(presum, presum + n, total_time_left) - presum;
    if(presum[t] != total_time_left){
        t--;
    }
    cout<<t+1;
}