#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        ll a[n];
        for(int i = 0 ;i < n; i++){
            cin>>a[i];
            a[i] = (k - a[i]%k)%k;
        }
        sort(a, a + n);
        ll ans = 0;
        ll start = 0;
        while(a[start] == 0){
            start++;
            if(start >= n){break;}
        }
        if(start >= n){
            cout<<ans<<"\n";
        }else{
            // vector<ll> a1;
            // vector<ll> a2;
            // a1.push_back(a[start]);
            // ll curr_mul = 1;
            // for(int i = start + 1; i < n; i++){
            //     if(a[i] == a[i-1]){
            //         a2.push_back(curr_mul*k + a[i]);
            //         curr_mul++;
            //     }else{
            //         curr_mul = 1;
            //         a1.push_back(a[i]);
            //     }
            // }    
            // vector<ll> mix;
            // ll n1 = a1.size();
            // ll n2 = a2.size();
            // ll i1 = 0;ll i2 = 0;
            // while(i1 < n1 && i2 < n2){
            //     if(a1[i1] > a2[i2]){
            //         mix.push_back(a2[i2]);
            //         i2++;
            //     }else if(a1[i1] < a2[i2]){
            //         mix.push_back(a1[i1]);
            //         i1++;
            //     }else{
            //         mix.push_back(a1[i1] + k);
            //         i1++;
            //     }
            // }
            // if(i1 == n1 && i2 != n2){
            //     while(i2 != n2){
            //         mix.push_back(a2[i2]);
            //         i2++;
            //     }
            // }else if(i1 != n1 && i2 == n2){
            //     while(i1 != n1){
            //         mix.push_back(a1[i1]);
            //         i1++;
            //     }
            // }
            vector<ll> mix;
            mix.push_back(a[start]);
            ll mul = 1;
            for(int i = start+1; i < n; i++){
                if(a[i] == a[i-1]){
                    mix.push_back(mul*k + a[i]);
                    mul++;
                }else{
                    mul = 1;
                    mix.push_back(a[i]);
                }
            }
            sort(mix.begin(), mix.end());
            ans = mix[0] + 1;
            for(int i = 1; i < mix.size(); i++){
                ans += mix[i] - mix[i-1];
            }
            cout<<ans<<"\n";
        }
        

    }
}
