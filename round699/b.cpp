#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n, k; cin>>n>>k;
        vector<ll> h(n);
        for(int i = 0; i < n; i++) {
            cin>>h[i];
        }
        ll curr = 0;
        int ans = -1;
        int i = 0;
        int done = 0;
        while(i < n) {
            // cout<<i<<"\n";
            int start = i;
            int end = i + 1;
            while(end < n) {
                if(h[end] > h[start]) {
                    end++;
                    start++;
                } else {
                    break;
                }
            }
            // for(int p = i + 1; p <= start; p++) {
            //     for(int l = p - 1; l >= i; l--) {
            //         if(h[p] > h[l]) {
            //             curr += h[p] - h[l];
            //             if(k <= curr && done == 0) {
            //                 ans = l + 1;
            //                 done = 1;
            //             }
            //             h[l] = h[p];    
            //         }
            //     // cout<<p<<"\n";
            //     }
            // }
            for(int p = i + 1; p <= start; p++) {
                if(k <= curr + (h[p] - h[p-1])*(p - i) && done == 0) {
                    int vals = p - i;
                    ans = i + (vals - (k - curr)%vals)%vals + 1;
                    done = 1;
                }
                curr += (h[p] - h[p-1])*(p - i);
                for(int l = i; l < p; l++) {
                    h[l] = h[p];
                }
                // cout<<p<<":"<<curr<<"\n";
            }
            i = end;
        }
        cout<<ans<<"\n";
    }
}
