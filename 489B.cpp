#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int boys[n];
    for(int i=0;i<n;i++){
        scanf("%d", &boys[i]);
    }
    int m;
    scanf("%d", &m);
    int girls[m];
    for(int i=0;i<m;i++){
        scanf("%d", &girls[i]);
    }
    sort(boys, boys+n);
    sort(girls, girls+m);
    int ans = 0;
    int b=0, g=0;
    while(b < n && g < m){
        if(abs(boys[b] - girls[g]) <= 1){
            ans++;b++;g++;
        }else if(boys[b] > girls[g]){
            g++;
        }else{
            b++;
        }
    }
    printf("%d", ans);


}