#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;scanf("%d", &t);
    while(t--){
        int h,m;
        scanf("%d %d", &h, &m);
        int ans = 0;
        ans = (23-h)*60 + (60 - m);
        printf("%d\n", ans);
    }
}