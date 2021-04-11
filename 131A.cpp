#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int flag = 0;
    cin>>s;
    for(int i=1;i<s.length();i++){
        if(islower(s[i])){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout<<s;
    }else{
        if(islower(s[0])){
            s[0] = toupper(s[0]);
        }else{
            s[0] = tolower(s[0]);
        }
        for(int i=1;i<s.length();i++){
            s[i] = tolower(s[i]);
        }
        cout<<s;
    }
}