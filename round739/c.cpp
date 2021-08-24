#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll k; cin>>k;
        ll n = floor(sqrt(k - 1));
        ll r = 0, c = n;
        ll num = n*n + 1;
        while(num != k && r <= n) {
            num++;
            r++;
        }
        if(r > n) {
            r = n;num--;
            while(num != k && c >= 0) {
                c--;
                num++;
            }
        }
        cout<<r + 1<<" "<<c + 1<<"\n";

    }
}
