#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll W,H; cin>>W>>H;
        ll x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;
        ll w,h; cin>>w>>h;
        ll ans = 1e15;
        ll fw = abs(x2 - x1), fh = abs(y2 - y1);
        ll pos = 0;
        if(fh + h > H && fw + w > W) {
            cout<< -1 <<"\n";
        } else {
            if(fw + w <= W) {
                ans = min(ans, (x2 - (W - w)));
                ans = min(ans, (w - x1));
            }
            if(fh + h <= H) {
                ans = min(ans, (y2 - (H - h)));
                ans = min(ans, (h - y1));
            }
            ans = max(ans, (long long)0);
            cout<< ans <<"\n";
        }

    }
}
