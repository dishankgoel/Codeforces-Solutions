#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[n];
        int ans = 0;
        int all_one = 1;
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        for(int i = 0; i < n; i++){
            if(a[i] != 1){
                all_one = 0;
                break;
            }else{
                ans = (ans + 1)%2;
            }
        }
        if(all_one){
            if(ans == 1){
                cout<<"First\n";
            }else{
                cout<<"Second\n";
            }
        }else{
            if(ans == 0){
                cout<<"First\n";
            }else{
                cout<<"Second\n";
            }
        }
        

    }
}
