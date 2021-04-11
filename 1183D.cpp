#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;scanf("%d",&q);
    for(int i=0;i<q;i++){
        int n;scanf("%d",&n);
        int freq[n];
        for(int i=0;i<n;i++){
            freq[i] = 0;
        }
        for(int i=0;i<n;i++){
            int t;
            scanf("%d",&t);
            freq[t-1] += 1; 
        }
        sort(freq, freq+n, greater<int>());
        int ans=0;
        ans = freq[0];
        for(int i=1;i<n;i++){
            if(freq[i] > )
        }
        
    }
}