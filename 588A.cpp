#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;cin>>n;
    ll meat[n];
    ll required[n];
    ll ans = 0;
    ll curr_min = 0;
    for(int i = 0; i < n ; i++){
        cin>>required[i]>>meat[i];
        if(i==0){curr_min = meat[0];ans += curr_min*required[i];}
        else{
            if(meat[i] < curr_min){
                curr_min = meat[i];
            }
            ans += curr_min*required[i];
        }
    } 
    cout<<ans;   
}