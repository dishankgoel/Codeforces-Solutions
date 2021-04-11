#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int dp[n];
    dp[0] = 1;
    int ans = 1;
    for(int i=1;i<n;i++){
        if(arr[i] >= arr[i-1]){
            dp[i] = dp[i-1] + 1;
            ans = max(ans, dp[i]);
        }else{
            dp[i] = 1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}