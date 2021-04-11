#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;cin>>n;
        ll t[n];
        for(int i = 0 ; i < n;i++){
            cin>>t[i];
        }
        queue<int> g;
        int ans[n];
        ans[0] = 1;
        int k = 1;
        for(int i = 1; i <n; i++){
            if(t[i] == t[i-1]){
                ans[i] = ans[i-1];
            }else{
                if(!g.empty()){
                    ans[i] = g.front();
                    g.pop();
                    g.push(ans[i-1]);
                }else{
                    k = k + 1;
                    ans[i] = k;
                    g.push(ans[i-1]);
                }
            }
        }
        if(t[0] != t[n-1] && ans[0] == ans[n-1]){
            k = k+1;
            ans[n-1] = k;
        }
        cout<<k<<"\n";
        for(int i = 0; i < n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}