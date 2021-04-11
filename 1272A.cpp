#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll a, ll b, ll c){
    return abs(a-b) + abs(b-c) + abs(a-c);
}
ll min(ll a, ll b, ll c, ll d){
    return min(min(min(a,b),c),d);
}

int main(){
    int q;scanf("%d", &q);
    while(q--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long ans = 10000000000;
        for(int i=0;i<27;i++){
            if(i<9){
                if(i<3){
                    ans = min(ans, f(a,b,c), f(a,b,c+1), f(a,b,c-1));
                }else if(i < 6){
                    ans = min(ans, f(a,b+1, c), f(a,b+1, c+1), f(a,b+1, c-1));
                }else{
                    ans = min(ans, f(a,b-1, c), f(a,b-1, c+1), f(a,b-1, c-1));
                }
            }else if(i<18){
                if(i<12){
                    ans = min(ans, f(a+1,b,c), f(a+1,b,c+1), f(a+1,b,c-1));
                }else if(i < 15){
                    ans = min(ans, f(a+1,b+1, c), f(a+1,b+1, c+1), f(a+1,b+1, c-1));
                }else{
                    ans = min(ans, f(a+1,b-1, c), f(a+1,b-1, c+1), f(a+1,b-1, c-1));
                }
            }else if(i<27){
                if(i<21){
                    ans = min(ans, f(a-1,b,c), f(a-1,b,c+1), f(a-1,b,c-1));
                }else if(i < 24){
                    ans = min(ans, f(a-1,b+1, c), f(a-1,b+1, c+1), f(a-1,b+1, c-1));
                }else{
                    ans = min(ans, f(a-1,b-1, c), f(a-1,b-1, c+1), f(a-1,b-1, c-1));
                }
            }
        }
        cout<<ans<<"\n";
    }
}