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
        char x[n];
        char a[n];
        char b[n];
        a[0] = '1';
        b[0] = '1';
        int curr = 0;
        for(int i = 0; i < n; i++){
            cin>>x[i];
            
        }
        for(int i = 1; i < n; i++){
            if(x[i] == '0'){
                a[i] = '0';
                b[i] = '0';
            }
            else if(x[i] == '1'){
                if(curr == 0){
                    a[i] = '1';
                    b[i] = '0';
                    curr = 1;
                }else{
                    a[i] = '0';
                    b[i] = '1';
                }
            }else{
                if(curr == 0){
                    a[i] = '1';
                    b[i] = '1';
                }else{
                    a[i] = '0';
                    b[i] = '2';
                }
            }
        }
        for(int i = 0 ;i < n; i++){
            cout<<a[i];
        }
        cout<<"\n";
        for(int i = 0 ;i < n; i++){
            cout<<b[i];
        }
        cout<<"\n";
    }

}