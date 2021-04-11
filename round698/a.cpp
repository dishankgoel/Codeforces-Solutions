#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        int ans = 1;
        int curr = 1;
        for(int i = 1; i < n; i++) {
            if(a[i] == a[i-1]) {
                curr++;
            } else {
                ans = max(ans, curr);
                curr = 1;
            }
        }
        if(n >= 2) {
            if(a[n - 1] == a[n-2]) {
                ans = max(ans, curr);
            }
        }
        cout<<ans<<"\n";
    }
}
