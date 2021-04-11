#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    long long weight[n];
    long long set[n];
    set[0] = arr[0];
    int ptr = 0;
    int w = 1;
    for(int i=1;i<n;i++){
        if(arr[i] == arr[i-1]){
            w += 1;
        }else{
            weight[ptr] = w;
            ptr++;
            set[ptr] = arr[i];
            w = 1;
        }
    }
    weight[ptr] = w;
    long long dp[ptr+1];
    dp[0] = set[0]*weight[0];
    if(set[1] - 1 == set[0]){
        dp[1] = max(dp[0], set[1]*weight[1]);
    }else{
        dp[1] = dp[0] + set[1]*weight[1];
    }
    for(int i=2;i<ptr+1;i++){
        if(set[i]-1 == set[i-1]){
            dp[i] = max(dp[i-1], set[i]*weight[i] + dp[i-2]);
        }else{
            dp[i] = dp[i-1] + set[i]*weight[i];
        }
    }
    cout<<dp[ptr]<<"\n";
}