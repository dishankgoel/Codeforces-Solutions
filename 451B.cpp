#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int s1=0,s2=n;
    int flag = 0, s = 0;
    for(int i=1;i<n;i++){
        if(flag){
            if(a[i] > a[i-1]){
                s2 = i;
                flag = 0;
            }
        }
        if(a[i] < a[i-1] && flag == 0){
            s1 = i;
            flag = 1;s++;
            if(s >= 2){
                printf("no");break;
            }
        }
    }
    if(s <= 1){
        if(s1 == 0){
            printf("yes\n1 1");
        }else{
            if(s1 == 1){
                if(s2 == n){
                    printf("yes\n%d %d", 1, s2);
                }else if(a[0] <= a[s2]){
                    printf("yes\n%d %d", 1, s2);
                }else{
                    printf("no");
                }
            }else if(s2==n){
                if(a[n-1] >= a[s1-2]){
                    printf("yes\n%d %d", s1,s2);
                }else{
                    printf("no");
                }
            }else if(a[s1-1] <= a[s2] && a[s2-1] >= a[s1-2]){
                printf("yes\n%d %d", s1,s2);
            }else{
                printf("no");
            }
        }
    }
}