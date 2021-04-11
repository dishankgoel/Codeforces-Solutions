#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,q;
    cin>>n>>q;
    ll a[n];
    ll presum[n];
    for(int i= 0; i < n; i++){
        cin>>a[i];
        if(i == 0){
            presum[i] = a[i];
        }else{
            presum[i] = presum[i-1] + a[i];
        }
    }
    ll k[q];
    ll curr_dead = 0;
    for(int i = 0;i < q; i++){
        cin>>k[i];
    }
    for(int i = 0; i < q; i++){
        ll curr = lower_bound(presum, presum + n, k[i]) - presum;
        if(curr < n){
            if(presum[curr] != k[i]){curr--;}
        }
        if(curr >= n-1){
            curr_dead = 0;
        }else{
            if(i + 1 < q){
                k[i+1] = k[i] + k[i+1];
            }
            curr_dead = curr+1;
        }
        cout<<n - curr_dead<<"\n";
    }
}