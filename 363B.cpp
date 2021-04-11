#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int h[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    int presum[n];
    presum[0] = h[0];
    for(int i=1;i<n;i++){
        presum[i] = presum[i-1] + h[i];
    }
    int ans = 1, min_sum = presum[k-1];
    for(int i=0;i<n-k;i++){
        int t = presum[i+k] - presum[i];
        if( t < min_sum){
            min_sum = t;
            ans = i+2;
        }
    }
    cout<<ans;
}