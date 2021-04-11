#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int h[n];
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        int ans = 1;
        int curr_blocks = m;
        for(int i=0;i<n-1;i++){
            if(abs(h[i] - h[i+1]) > k){
                if(h[i] > h[i+1]){
                    if(h[i+1] >= k){
                        curr_blocks += h[i] - (h[i+1] - k);
                    }else{
                        curr_blocks += h[i];
                    }
                    
                }else{
                    if((h[i+1] - k) - h[i] > curr_blocks){
                        ans = 0;
                        break;
                    }else{
                        curr_blocks -= (h[i+1] - k) - h[i];
                    }
                }
            }else{
                if(h[i+1] >= k){
                    curr_blocks += h[i] - (h[i+1] - k);
                }else{
                    curr_blocks += h[i];
                }
                
            }
        }
        if(ans){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}