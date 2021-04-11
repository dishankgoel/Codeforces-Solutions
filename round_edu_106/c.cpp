#include<bits/stdc++.h>
#define ll long long

using namespace std;


ll min_cost(vector<ll> c, ll n) {
    ll curr = n;
    int min_in = 0;
    ll min_el = c[0];
    for(int i = 1; i < c.size(); i++) {
        if(c[i] < min_el) {
            min_el = c[i];
            min_in = i;
        }
    }
    ll cost = 0;
    for(int i = 0; i <= min_in; i++) {
        if(i == min_in) {
            cost += c[i]*(n - min_in);
        } else {
            cost += c[i];
        }
    } 
    return cost;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> c(n);
        vector<ll> odd;
        vector<ll> even;
        for(int i = 0; i < n; i++) {
            cin>>c[i];
            if(i%2 == 0) {
                even.push_back(c[i]);
            } else {
                odd.push_back(c[i]);
            }
        }
        cout<< min_cost(odd, n) + min_cost(even, n) <<"\n";
    }
}
