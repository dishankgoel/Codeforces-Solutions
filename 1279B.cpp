#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;scanf("%d", &t);
    while(t--){
        ll n,s;
        cin>>n>>s;
        ll a[n];
        for(int i=0;i<n;i++){cin>>a[i];}
        int curr_max_index = 0;
        ll curr_max = a[0];
        int curr_money = 0;
        for(int i=0;i<n;i++){
            curr_money += a[i];
            if(a[i] >= curr_max){
                curr_max = a[i];
                curr_max_index = i;
            }
            if(curr_money > s){
                break;
            }
            if(i == n-1){
                curr_max_index = -1;
            }
        }
        cout<<curr_max_index+1<<"\n";
    }
}