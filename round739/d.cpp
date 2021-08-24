#include<bits/stdc++.h>
#define ll long long

using namespace std;

int solve(string a, string b) {
    int n = a.size(), m = b.size();
    int ans = 0;
    int i = 0, j = 0;
    while(i < n && j < m) {
        if(a[i] != b[j]) {
            i++; ans++;
        } else {
            i++; j++;
        }
    }
    if(i < n) {
        ans += n - i;
    } else if(j < m) {
        ans += m - j;
    }
    return ans;

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    vector<string> targets;
    for(int i = 0; i <= 60; i++) {
        targets.push_back(to_string(1LL << i));
    }
    while(t--){
        string n; cin>>n;
        int ans = 31;
        for(auto t : targets) {
            ans = min(ans, solve(n, t));
        }
        cout<<ans<<"\n";
    }
}
