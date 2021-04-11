#include<bits/stdc++.h>
using namespace std;
#define ll long long

int check(string s1, string s2){
    ll n = s1.length();
    if(n&1){
        for(int i = 0; i<n;i++){
            if(s1[i] != s2[i]){
                return 0;
            }
        }
        return 1;
    }else{
        if((check(s1.substr(0, n/2), s2.substr(n/2, n/2)) && check(s1.substr(n/2, n/2), s2.substr(0, n/2))) || (check(s1.substr(0, n/2), s2.substr(0, n/2)) && check(s1.substr(n/2, n/2), s2.substr(n/2, n/2)))){
            return 1;
        }else{
            return 0;
        }
    }
}


int main(){
    string s1;cin>>s1;
    string s2;cin>>s2;
    if(check(s1, s2)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}