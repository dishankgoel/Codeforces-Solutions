#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long b[n];
    for(int i=0;i<n;i++){
        scanf("%ld", &b[i]);
    }
    sort(b, b+n);
    int f=0;
    long long n1 = 1;
    for(int i=0;i<n-1;i++){
        if(b[i] != b[i+1]){
            break;
        }else{
            n1++;
            if(i == n-2){
                f = 1;
            }
        }
    }
    long long n2 = 1;
    for(int i=n-1;i>0;i--){
        if(b[i] != b[i-1]){
            break;
        }else{
            n2++;
        }
    }
    long long ans = n1*n2;
    if(f){
        ans = n*(n-1)/2;
    }
    cout<<b[n-1]-b[0]<<" "<<ans;
}