#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll m = 998244353;
ll maxn = 3e5 + 1;
ll fact[(int)3e5 + 1];

ll power(ll x, ll y, ll p) {
    ll res = 1;
    x = x%p;
    while (y > 0)
    {
     
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}


void calcfact() {
    fact[0] = 1;
    for(ll i = 1; i < maxn; i++) {
        fact[i] = (fact[i - 1]*i)%m;
    }
}

ll inverse(ll a) {
    return power(a, m - 2, m);
}

ll ncr(ll n, ll r) {
    return (((fact[n]*inverse(fact[r]))%m)*inverse(fact[n - r]))%m;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    calcfact();
    while(t--){
        ll n; cin>>n;
        ll a[n];
        ll maxel = 0;
        for(ll i = 0; i < n; i++) {
            cin>>a[i];
            maxel = max(maxel, a[i]);
        }
        ll c1 = 0, c2 = 0;
        for(ll i = 0; i < n; i++) {
            if(a[i] == maxel) {
                c1++;
            } else if(maxel - a[i] >= 2) {
                c2++;
            }
        }
        if(c1 != 1) {
            cout<<fact[n]<<"\n";
        } else {
            ll badones = 0;
            for(ll c = 0; c <= c2; c++) {
                badones = (badones + (fact[c]*(fact[n - c - 1]*ncr(c2, c))%m)%m)%m;
                // cout<<badones<<"==\n";
            }
            cout<<(fact[n] - badones + m)%m<<"\n";
        }
    
    }
}
