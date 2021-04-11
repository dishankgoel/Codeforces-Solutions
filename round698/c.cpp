#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> d(2*n); 
        for(int i = 0; i < 2*n; i++) {
            cin>>d[i];
        }
        sort(d.begin(), d.end());
        int ans = 1;
        vector<ll> actual;
        for(int i = 0; i < 2*n; i += 2) {
            if(d[i] != d[i + 1]) {
                ans = 0;break;
            } else {
                actual.push_back(d[i]);
            }
        }
        vector<ll> a(n, -1);
        ll su = 0;
        if(actual.size() == n) {
            for(int i = n - 1; i >= 0; i--) {
                ll p = actual[i] - 2*su;
                if(p%(2*(i + 1)) != 0 || p <= 0) {
                    ans = 0;break;
                } else {
                    a[i] = p/(2*(i + 1));
                }
                su += a[i];
            }
            for(int i = 1; i < n; i++) {
                if(a[i] <= a[i - 1]) {
                    ans = 0; break;
                }
            }
        } else {
            ans = 0;
        }
        
        if(ans) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }

    }
}
