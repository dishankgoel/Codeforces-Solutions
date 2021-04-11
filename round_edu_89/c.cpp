#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        ll a[n][m];
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>a[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m/2; j++){
                if(a[i][j] != a[n - j - 1][m - i - 1]){
                    ans += 1;
                }
            }
        }
        if(m%2 != 0){
            for(int i = 0; i < n/2; i++){
                if(a[i][m/2] != a[n-i-1][m/2]){
                    ans += 1;
                }
            }
        }
        cout<<ans<<"\n";
    }
}