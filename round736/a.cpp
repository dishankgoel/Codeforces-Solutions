#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll p;
        cin>>p;
        if(p%2 == 0) {
            cout<<2<<" "<<p<<"\n";
        } else {
            cout<<2<<" "<<p - 1<<"\n";
        }
    
    }
}
