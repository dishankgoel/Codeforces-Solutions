#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n, k; cin>>n>>k;
        vector<ll> ans;
        for(int i = 1; i <= 2*k - n - 1; i++) {
            ans.push_back(i);
        }
        for(int i = 2*k - n; i <= k; i++) {
            ans.push_back(-i - n + 3*k);
        }
        for(int i = 0; i < k; i++) {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}
