#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int p[n];
    for(int i=0;i<n;i++){
        scanf("%d", &p[i]);
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        int start = i;
        int curr_height = 0;
        while(p[start] != -1){
            start = p[start]-1;
            curr_height++;
        }
        ans = max(ans, curr_height);
    }
    printf("%d", ans+1);
    
}