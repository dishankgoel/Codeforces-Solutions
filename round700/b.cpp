#include<bits/stdc++.h>
#define ll long long

using namespace std;

int compare(pair<int, int> a, pair<int, int> b) {
    if(a.first < b.first) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll A,B,n;
        cin>>A>>B>>n;
        vector<ll> a(n);
        vector<ll> b(n);
        vector<pair<ll, ll>> e(n);
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        for(int i = 0; i < n; i++) {
            cin>>b[i];
        }
        for(int i = 0; i < n; i++) {
            e[i].first = a[i];
            e[i].second = b[i];
        }
        sort(e.begin(), e.end(), compare);
        int ans = 1;
        ll curr_health = B;
        for(int i  = 0; i < n; i++) {
            ll times = ceil((float)e[i].second/(float)A);
            if(i != n - 1) {
                if(curr_health <= times*e[i].first) {
                    ans = 0; break;
                } else {
                    curr_health -= times*e[i].first;
                }
            } else {
                if(curr_health <= (times - 1)*e[i].first) {
                    ans = 0; break;
                }
            }
        }
        if(ans) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
}
