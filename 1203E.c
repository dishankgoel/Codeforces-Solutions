#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b){
    return (*(int*)a - *(int*)b);
}

struct freq
{
    int val;
    int count;
};

int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    struct freq[n];
    int c=0;
    qsort(a, n, sizeof(int), compare);
    for(int i=1;i<n;i++){
        if(a[i] == a[i-1]){
            c++;
        }else{
            c = 
        }
    }
    

}