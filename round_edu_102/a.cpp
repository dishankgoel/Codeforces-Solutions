#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n,d; cin>>n>>d;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {cin>>a[i];}
        int ans = 0;
        int if_all = 1;
        for(int i = 0; i < n; i++) {
            if(a[i] > d) {
                if_all = 0;
            }
            for(int j = i + 1; j < n; j++) {
                if(a[i] + a[j] <= d) {
                    ans = 1;
                    break;
                }
            }
        }
        if(ans || if_all) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }

    }
}
