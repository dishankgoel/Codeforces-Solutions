#include<bits/stdc++.h>
#include<string>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int n = s.length();
    int f=0;int s1=n;int ans = 0;
    for(int i=0;i<n-1;i++){
        if(s[i] == 'A' && s[i+1] == 'B'){
            s1 = i;break;
        }
    }
    for(int i=s1+2;i<n-1;i++){
        if(s[i] == 'B' && s[i+1] == 'A'){
            ans = 1;break;
        }
    }
    s1 = n;
    for(int i=0;i<n-1;i++){
        if(s[i] == 'B' && s[i+1] == 'A'){
            s1 = i;break;
        }
    }
    for(int i=s1+2;i<n-1;i++){
        if(s[i] == 'A' && s[i+1] == 'B'){
            ans = 1;break;
        }
    }
    if(ans){
        printf("YES");
    }else{
        printf("NO");
    }

    
}