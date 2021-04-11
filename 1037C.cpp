#include<bits/stdc++.h>
using namespace std;
// #define ll long long
int main(){
    int n;
    cin>> n;
    string a,b;
    cin>>a;
    cin>>b;
    int ans = 0;
    int i=0;
    while(i<n-1){
        if(a[i]!=b[i]){
            if(a[i] != a[i+1] && a[i+1] != b[i+1]){
                ans++;
                i++;
            }else{
                ans++;
            }
        }
        i++;
    }
    if(i != n && a[n-1] != b[n-1]){
        ans++;
    }
    cout<<ans;
}