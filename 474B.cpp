#include<bits/stdc++.h>
using namespace std;


int b_search(int* a, int to_search, int n){
    if(to_search < a[0]){
        return -1;
    }
    int b=0,e=n-1;
    while(b < e){
        int mid = (b+e)/2;
        if(to_search < a[mid]){
            e = mid - 1;
        }else if(to_search > a[mid]){
            b = mid + 1;
        }else{
            return mid;
        }
    }
    if(a[b] > to_search){
        return b-1;
    }else{
        return b;
    }

}

int main(){
    int n;scanf("%d", &n);
    int a[n];int presum[n];
    scanf("%d", &a[0]);
    presum[0] = a[0];
    for(int i=1;i<n;i++){
        scanf("%d", &a[i]);
        presum[i] = presum[i-1] + a[i];
    }
    int m;scanf("%d", &m);
    for(int i=0;i<m;i++){
        int q;scanf("%d", &q);
        int just_before = b_search(presum, q, n);
        if(presum[just_before] == q){
            printf("%d\n", just_before+1);
        }else{
            printf("%d\n", just_before + 2);
        }

    }
}