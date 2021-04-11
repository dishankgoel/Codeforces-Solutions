#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int f[m];
    for(int i=0;i<m;i++){
        scanf("%d", &f[i]);
    }
    sort(f, f+m);
    int ans = 10000000;
    for(int i=n-1;i<m;i++){
        ans = min(ans, f[i] - f[i-n+1]);
    }
    printf("%d", ans);
}