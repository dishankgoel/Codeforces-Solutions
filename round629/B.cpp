#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll pos1 = 0;
        ll pos2 = 0;
        for(ll i = 1 ;i < n; i++){
            if(k <= i*(i+1)/2.0){
                pos1 = i;
                break;
            }
        }
        pos2 = (k - (pos1*(pos1-1)/2));
        char ans[n];
        for(int i = 0 ; i < n; i++){
            ans[i] = 'a';
        }
        ans[n - pos1-1] = 'b';
        ans[n - pos2] = 'b';
        for(int i = 0 ;i < n; i++){
            cout<<ans[i];
        }
        cout<<"\n";
    }

}