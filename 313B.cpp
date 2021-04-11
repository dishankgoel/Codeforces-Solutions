#include<bits/stdc++.h>
using namespace std;

int main(){
    string p;
    getline(cin,p);
    int n = p.length();
    int dp[n];
    dp[0] = 0;
    for(int i=1;i<n;i++){
        if(p[i] == p[i-1]){
            dp[i] = dp[i-1] + 1;
        }else{
            dp[i] = dp[i-1];
        }
    }
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        cout<<dp[r-1] - dp[l-1]<<"\n";
    }
}