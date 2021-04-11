#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int a[n];int total_sum = 0;
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
        total_sum += a[i];
    }
    int ans = 0, curr_sum = 0;
    sort(a, a+n, greater<int>());
    for(int i=0;i<n;i++){
        if(curr_sum <= total_sum/2){
            ans++;
            curr_sum += a[i];
        }
    }
    printf("%d", ans);

}