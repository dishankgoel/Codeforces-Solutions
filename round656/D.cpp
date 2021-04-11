#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll recurse(string s, ll c, ll n){
    if(n == 1){
        if(s[0] == c){
            return 0;
        }else{
            return 1;
        }
    }
    ll cost1 = 0, cost2 = 0;
    for(int i = 0; i < n/2; i++){
        if(s[i] != c){
            cost1++;
        }
    }
    for(int i = n/2; i < n; i++){
        if(s[i] != c){
            cost2++;
        }
    }
    return min(recurse(s.substr(0, n/2), c+1, n/2) + cost2, recurse(s.substr(n/2, n/2), c+1, n/2) + cost1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string s;cin>>s;
        cout<<recurse(s, 'a', n)<<"\n";
    }
}
