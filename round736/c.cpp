#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll m,n;
    cin>>n>>m;
    int curr_alive = n;
    vector<int> higherconnected(n, 0);
    for(int i = 0; i < m; i++) {
        int u, v; cin>>u>>v;
        u--; v--;
        higherconnected[min(u, v)]++;
        if(higherconnected[min(u, v)] == 1) {
            curr_alive--;
        }
    }
    int q; cin>>q;
    for(int i = 0; i < q; i++) {
        int type;
        cin>>type;
        if(type == 1) {
            int u, v; cin>>u>>v;u--;v--;
            higherconnected[min(u, v)]++;
            if(higherconnected[min(u, v)] == 1) {
                curr_alive--;
            }
        } else if(type == 2) {
            int u, v; cin>>u>>v;u--;v--;
            higherconnected[min(u, v)]--;
            if(higherconnected[min(u, v)] == 0) {
                curr_alive++;
            }
        } else {
            cout<<curr_alive<<"\n";
        }
    }
}
