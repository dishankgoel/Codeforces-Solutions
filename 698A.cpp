#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int dp[n][3];
    if(a[0] == 0){
        dp[0][0] = 1;
        dp[0][1] = 1;
    }else if(a[0] == 1){
        dp[0][0] = 0;
        dp[0][1] = 1;
    }else if(a[0] == 2){
        dp[0][0] = 1;
        dp[0][1] = 0;
    }else{
        dp[0][0] = 0;
        dp[0][1] = 0;
    }
    dp[0][2] = 1;
    for(int i=1;i<n;i++){
        for(int j = 0; j < 3; j++){
            if(a[i] == 0){
                dp[i][j] = 1 + min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2]));
            }else if(a[i] == 1){
                if(j == 0){
                    dp[i][j] = dp[i-1][1];
                }else{
                    dp[i][j] = 1 + min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2]));
                }
            }else if(a[i] == 2){
                if(j == 1){
                    dp[i][j] = dp[i-1][0];
                }else{
                    dp[i][j] = 1 + min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2]));
                }
            }else{
                if(j==0 || j==1){
                    dp[i][j] = dp[i-1][1-j];
                }else{
                    dp[i][j] = 1 + min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2]));
                }
            }
        }
    }
    int ans = min(dp[n-1][0], min(dp[n-1][1], dp[n-1][2]));
    cout<<ans;
}