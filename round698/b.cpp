#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int q,d; cin>>q>>d;
        ll a[q];
        for(int i = 0; i < q; i++) {
            cin>>a[i];
        }
        vector<int> candidates;
        for(int i = 0; i <= d; i++) {
            candidates.push_back(i*10 + d);
        }
        vector<int> canbe(d*10, 0);
        canbe[0] = 1;
        for(int i = 1; i < d*10; i++) {
            int can = 0;
            for(int j = 0; j < candidates.size(); j++) {
                if(candidates[j] <= i) {
                    can = can | canbe[i - candidates[j]];
                }
            }
            canbe[i] = can;
        }
        for(int i = 0; i < q; i++) {
            if(a[i] >= d*10) {
                cout<<"YES\n";
            } else {
                if(canbe[a[i]] == 1) {
                    cout<<"YES\n";
                } else {
                    cout<<"NO\n";
                }
            }
        }
    }
}
