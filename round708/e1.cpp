#include<bits/stdc++.h>
#define ll long long

using namespace std;


#define MAXN 10000001

int spf[MAXN];

void seive() {
    spf[1] = 1;
    for(int i = 2; i < MAXN; i++) {
        spf[i] = i;
    }
    for(int i = 4; i < MAXN; i += 2) {
        spf[i] = 2;
    }
    for(int i = 3; i < MAXN; i++) {
        if(spf[i] == i) {
            for(ll j = i*i; j < MAXN; j += i) {
                if(spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

unordered_map<ll, int> getfac(ll x) {
    // vector<ll> ret;
    unordered_map<ll, int> ret;
    while (x != 1) {
        ret[spf[x]]++;
        x = x/spf[x];
    }
    return ret;
    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    seive();
    while(t--){
        ll n, k; cin>>n>>k;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        int ans = 0;
        unordered_map<ll, int> fac;
        for(int i = 0; i < n; i++) {
            unordered_map<ll, int> newfac = getfac(a[i]);
            for(auto it = newfac.begin(); it != newfac.end(); it++) {
                int num = it->second;
                if(num%2 != 0) {
                    ans = 0;
                    break;
                }
            }
            
        }
    }
}
