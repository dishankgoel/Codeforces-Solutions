#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> dp(100001, -1);


int solve(int a[], int n, int i, int p, int ans){
    if(i == n){
        dp[n] == ans;
        return ans;
    }
    if( p - a[i] < 0){
        dp[i] == ans;
        return ans;
    }
    if(dp[i] != -1){
        return dp[i];
    }
    if( p - a[i+1] >= 0){
        dp[i] = max(solve(a, n, i+1, p - a[i], ans + 1), solve(a, n, i+2, p - a[i+1], ans + 2));
        return dp[i];
    }else{
        dp[i] = solve(a, n, i+1, p - a[i], ans + 1);
        return dp[i];
    }
    
}



int main(){
    int t;scanf("%d", &t);
    while(t--){
        ll n,p,k;
        cin>>n>>p>>k;
        int a[n];
        for(int i=0;i<n;i++){scanf("%d", &a[i]);}
        sort(a, a+n);
        int ans = 0;
        dp = vector<int>(100001, -1);
        ans = solve(a, n, 0, p, 0);
        cout<<ans<<"\n";

    }
}