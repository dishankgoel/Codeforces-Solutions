#include<bits/stdc++.h>

using namespace std;

int main(){
    long n,m;
    scanf("%ld %ld",&n,&m);
    long a[n];
    long ans =0,in_place=0;
    for(int i=0;i<n;i++){
        scanf("%ld", &a[i]);
        ans += a[i];
        if(a[i] > 0){
            in_place++;
        }
    }
    long t = *max_element(a, a+n);
    ans = ans - in_place - t + 1 + min(in_place-1,t-1);
    printf("%ld",ans);


}