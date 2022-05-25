#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n], b[n];
        unordered_map<int, int> d;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            d[a[i]] = i;
        }
        for(int i = 0; i < n; i++) {
            cin>>b[i];
            d[b[i]] = i;
        }
        int ans = n - 1;
        int abovecost[n];
        abovecost[n - 1] = d[2*n];
        for(int i = n - 2; i >= 0; i--) {
            abovecost[i] = min(abovecost[i + 1], d[2*(i + 1)]);
        }
        for(int i = 0; i < n; i++) {
            ans = min(ans, i + abovecost[(a[i] - 1)/2]);
        }
        cout<<ans<<"\n";

    }
}
