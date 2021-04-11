#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    scanf("%d %d", &n, &k);
    unordered_map<char, int> d;
    string s;
    cin>>s;
    for(int i=0;i<k;i++){
        char c;
        cin>>c;
        d[c] = 1;
    }
    long long ans = 0;long long curr = 0;
    for(int i=0;i<s.length();i++){
        if(d[s[i]]){
            curr++;
        }else{
            ans += (long long)((curr)*(curr+1))/(long long)2;
            curr = 0;
        }
    }
    ans += (long long)((curr)*(curr+1))/(long long)2;
    cout<<ans;
}