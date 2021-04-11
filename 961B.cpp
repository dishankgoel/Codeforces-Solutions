#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    ll t[n];
    for(int i=0;i<n;i++){cin>>t[i];}
    ll curr_ans = 0;
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(t[i] == 1){
            curr_ans += a[i];
        }
    }
    for(int i = 0; i < k ; i++){
        if(t[i] == 0){
            curr_ans += a[i];
        }
    }
    ans = max(ans, curr_ans);
    for(int i = k; i < n; i++){
        if(t[i-k] == 0){
            curr_ans -= a[i-k];
        }
        if(t[i] == 0){
            curr_ans += a[i];
        }
        ans = max(ans, curr_ans);
    }
    ans = max(ans, curr_ans);
    cout<<ans;
}