#include<bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n == 1){
            cout<<0<<"\n";
            continue;
        }
        if(n%3 != 0){
            cout<<-1<<"\n";
        }else{
            ll fac2= 0;
            ll val = n; 
            while(val%2 == 0){
                val = val/2;
                fac2++;
            }
            ll fac3 = 0;
            while(val%3 == 0){
                val = val/3;
                fac3++;
            }
            if(fac2 > fac3){
                cout<<-1<<"\n";
            }else{
                if(val != 1){
                    cout<<-1<<"\n";
                }else{
                    cout<<fac3 - fac2 + fac3<<"\n";
                }
            }
        }

    }
}
