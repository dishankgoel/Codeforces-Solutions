#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n = s.size();
        ll c = 0;
        int count_1 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                count_1++;
            }
        }
        if(n - count_1 < count_1){
            if(n%2 == 1){
                if(count_1%2 == 1){
                    c = 0;
                }else{
                    c = 1;
                }
            }else{
                if(count_1%2 == 1){
                    c = 1;
                }else{
                    c = 0;
                }
            }
        }else{
            if(n%2 == 1){
                if(count_1%2 == 1){
                    c = 1;
                }else{
                    c = 0;
                }
            }else{
                if(count_1%2 == 1){
                    c = 1;
                }else{
                    c = 0;
                }
            }
        }
        if(c){
            cout<<"DA\n";
        }else{
            cout<<"NET\n";
        }
        // for(int i =0 ; i < n; i++){
        //     if(s[i] == '0'){
        //         curr++;
        //     }else{
        //         curr--;
        //         if(curr >= 0){
        //             c++;
        //         }
        //     }
        //     if(curr < 0){
        //         curr = 0;
        //     }
        // }
        // cout<<c<<"\n";
        // // for(int i = 0; i  < n; i++){
        // //     // if((s[i] == '0' && s[i+1] == '1') || (s[i] == '1' && s[i+1] == '0') ){
        // //     //     c++;
        // //     // }
        // //     if(s[i] == '1'){
        // //         c++;
        // //     }else{
        // //         c--;
        // //     }
        // // }
        // if(c%2 == 0){
        //     cout<<"NET\n";
        // }else{
        //     cout<<"DA\n";
        // }
        // if(c== 0 || c == (-1)*n || c == n){
        //     cout<<"NET\n";
        // }else{
        //     cout<<"DA\n";
        // }  
    }
}