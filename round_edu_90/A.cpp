#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll s1,s2;
        if(a < c){
            s1 = 1;
            if(b*a > c){
                s2 = b;
            }else{
                s2 = -1;
            }
        }else{
            s1 = -1;
            s2 = 2;
        }
        cout<<s1<<" "<<s2<<"\n";
    }
}