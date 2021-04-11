#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[n];
        for(int i = 0; i <n; i++){
            cin>>a[i];
        }
        int ans = 0;
        int curr = 1;
        if(a[1] > a[0]){
            curr = 1;
        }else{
            curr = 0;
        }
        vector<int> b;
        b.push_back(a[0]);
        for(int i = 1; i < n; i++){
            if(curr == 1 && a[i] < a[i-1]){
                b.push_back(a[i-1]);
                curr = 0;
            }else if(curr == 0 && a[i] > a[i-1]){
                b.push_back(a[i-1]);
                curr = 1;
            }
        }
        if(curr == 0 && a[n-1] < a[n-2]){
            b.push_back(a[n-1]);
        }else if(curr == 1 && a[n-1] > a[n-2]){
            b.push_back(a[n-1]);
        }
        cout<<b.size()<<"\n";
        for(int i=0 ; i < b.size(); i++){
            cout<<b[i]<<" ";
        }
        cout<<"\n";
    }
}