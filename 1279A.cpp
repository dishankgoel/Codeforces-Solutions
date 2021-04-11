#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;scanf("%d", &t);
    while(t--){
        ll a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a, a+3);
        int ans = 1;
        if(a[0] + a[1] < a[2] - 1){
            ans = 0;
        }
        if(ans){
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        } 
    }
}