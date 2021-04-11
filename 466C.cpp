#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    long long A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    long long presum[n];
    presum[0] = A[0];
    for(int i=1;i<n;i++){
        presum[i] = presum[i-1] + A[i];
    }
    long long ans=0;
    if(presum[n-1]%3 != 0){
        cout<<0;
    }else{
        long long curr_count = 0;
        for(int i=0;i<n-1;i++){
            if(presum[i] == 2*presum[n-1]/3){
                ans += curr_count;
            }
            if(presum[i] == presum[n-1]/3){
                curr_count++;
            }
        }
        cout<<ans;
    }
}