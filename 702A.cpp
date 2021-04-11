#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = 0,curr = 0;
    for(int i=0;i<n-1;i++){
        if(a[i] < a[i+1]){
            curr++;
        }else{
            ans = max(ans, curr+1);
            curr = 0;
        }
    }
    ans = max(ans, curr+1);
    cout<<ans;
}