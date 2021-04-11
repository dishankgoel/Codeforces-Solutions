#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        int A[n][n];
        if(k < n){
            for(int i = 0; i < k; i++){
                A[i][i] = 1;
            }
        }else{
            for(int i = 0; i < n; i++){
                A[i][i] = 1;
            }
            
        }
    }
}
