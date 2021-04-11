#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    scanf("%d %d", &m, &n);
    if(n > m){
        int temp = m;
        m = n;
        n = temp;
    }
    if(m&1){
        printf("%d", (m/2)*n + n/2);
    }else{
        printf("%d", (m/2)*n);
    }
    

}