#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;scanf("%d", &t);
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        unordered_map<int, int> d;
        for(int i = 0; i<n;i++){
            cin>>a[i];
            d[a[i]] = i;
        }
        for(int i=0;i<m;i++){cin>>b[i];}
        int curr_deepest = 0;
        ll ans = 0;
        int removed = 0;
        for(int i = 0; i<m;i++){
            if(d[b[i]] > curr_deepest){
                curr_deepest = d[b[i]];
                ans += 2*(curr_deepest-removed) + 1;
                removed++;
            }else{
                removed++;
                ans += 1;
            }
        }
        cout<<ans<<"\n";

    }
}