#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    sort(a, a+n);
    sort(b,b+n);
    int ans=0;
    for(int i=n/2;i<n;i++){
        ans += a[i];
    }
    for(int i=0;i<(n+1)/2;i++){
        ans -= b[i];
    }
    printf("%d",ans);
}