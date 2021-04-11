#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[2*n];
        vector<int> ans;
        ll done[n+1];
        for(int i = 0; i < n +1; i++){
            done[i] = 0;
        }
        for(int i = 0; i < 2*n; i++){
            cin>>a[i];
            if(done[a[i]] != 1){
                ans.push_back(a[i]);
            }
            done[a[i]] = 1;
        }
        for(int i =0 ;i < n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}
