#include<bits/stdc++.h>
using namespace std;
int binsearch(int* arr, int n, int to_find){
    int b=0,e=n-1;
    while(b<e){
        int mid = (b+e)/2;
        if(to_find < arr[mid]){
            e = mid - 1;
        }else if(to_find > arr[mid]){
            b = mid + 1;
        }else{
            // int same = mid;
            // while((same<n)&&(arr[same]==to_find)){
            //     same++;
            // }
            // if((same == n-1)&&(arr[same] == to_find)){
            //     return n;
            // }else{
            //     return same;
            // }
            b = mid+1;
        }
    }
    if(to_find < arr[0]){
        return 0;
    }else{
        if(b < n-1){
            if((to_find >= arr[b])&&(to_find < arr[b+1])){
                return b+1;
            }else if(to_find >= arr[b+1]){
                return b+2;
            }else if(to_find >= arr[b-1]){
                return b;
            }
        }else{
            if(to_find < arr[n-1]){
                return n-1;
            }
            if(to_find >= arr[n-1]){
                return n;
            }
        }
    }
    return 0;
}


int main(){
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    sort(x,x+n);
    int q;cin>>q;
    for(int i=0;i<q;i++){
        int m;cin>>m;
        int ans = binsearch(x, n,m);
        cout<<ans<<"\n";
    }

}