#include<bits/stdc++.h>
#define ll long long

using namespace std;

int compare(pair<ll, ll> a, pair<ll, ll> b) {
    return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<vector<ll>> g(n);
        ll ans = 0;
        for(int i = 0; i < n; i++) {
            ll k; cin>>k;
            for(int j = 0; j < k; j++) {
                ll x; cin>>x;
                g[i].push_back(x);
            }
        }
        vector<pair<ll, ll>> minreq;
        for(int i = 0; i < n; i++) {
            vector<ll> a = g[i];
            ll maxel = a[0] + 1;
            for(int j = 1; j < a.size(); j++) {
                if(a[j] - j + 1 > maxel) {
                    maxel = a[j] - j + 1;
                }
            }
            minreq.push_back({maxel, a.size()});
        }
        sort(minreq.begin(), minreq.end(), compare);
        ans = minreq[0].first;
        ll curr_score = ans + minreq[0].second;
        int reached = 0;
        while (reached < n - 1) {
            int target = reached + 1;
            if(curr_score < minreq[target].first) {
                ans += minreq[target].first - curr_score;
                curr_score = minreq[target].first + minreq[target].second;
            } else {
                curr_score += minreq[target].second;
            }
            reached++;
        }
        cout<<ans<<"\n";
    }
}
