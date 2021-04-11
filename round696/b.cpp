#include<bits/stdc++.h>
#define ll long long

using namespace std;

#define p 1000000

int primes[p];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 0; i < p; i++) {
        primes[i] = 1;
    }
    primes[0] = 0; primes[1] = 1;
    for(int i = 2; i < p; i++) {
        if(primes[i] == 1) {
            for(int j = 2*i; j < p; j += i) {
                primes[j] = 0;
            }
        }
    }
    int t;cin>>t;
    while(t--){

        ll d; cin>>d;
        ll a =  1 + d;
        while(primes[a] != 1) {
            a++;
        }
        ll b = a + d;
        while(primes[b] != 1) {
            b++;
        }
        ll ans = a*b;
        cout<<ans<<"\n";
    
    }
}
