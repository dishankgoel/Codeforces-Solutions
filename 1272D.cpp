#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n;i++){cin>>a[i];}
    ll start[n];
    ll end[n];
    end[0] = 1;
    for(int i = 1;i < n;i++){
        if(a[i] > a[i-1]){
            end[i] = end[i-1]+1;
        }else{
            end[i] = 1;
        }
    }
    start[n-1] = 1;
    for(int i = n-2; i > -1; i--){
        if(a[i] < a[i+1]){
            start[i] = start[i+1] + 1;
        }else{
            start[i] = 1;
        }
    }
    ll ans = 0;
    for(int i = 1;i < n-1; i++){
        if(a[i-1] < a[i+1]){
            ans = max(ans, end[i-1] + start[i+1]);
        }
    }
    ll ans1 = 0;ll t = 1;
    for(int i = 1;i < n; i++){
        if(a[i] > a[i-1]){
            t++;
        }else{
            ans1 = max(ans1, t);
            t = 1;
        }
    }
    ans1 = max(ans1, t);
    cout<<max(ans1, ans);
    

}