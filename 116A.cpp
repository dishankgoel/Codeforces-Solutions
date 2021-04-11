#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int max_count = 0, curr_count = 0;
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d %d", &a, &b);
        curr_count = curr_count - a + b;
        max_count = max(max_count, curr_count);
    }
    printf("%d", max_count);
}