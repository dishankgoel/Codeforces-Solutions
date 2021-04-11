#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int px, py; cin>>px>>py;
        string s;
        cin>>s;
        int n = s.size();
        int u = 0, d = 0, r = 0, l = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'U') {
                u++;
            } else if(s[i] == 'D') {
                d++;
            } else if(s[i] == 'R') {
                r++;
            } else {
                l++;
            }
        }
        int ans1, ans2;

        if(px <= 0) {
            if(l >= -px) {
                ans1 = 1;
            } else {
                ans1 = 0;
            }
        } else {
            if(r >= px) {
                ans1 = 1;
            } else {
                ans1 = 0;
            }
        }
        if(py <= 0) {
            if(d >= -py) {
                ans2 = 1;
            } else {
                ans2 = 0;
            }
        } else {
            if(u >= py) {
                ans2 = 1;
            } else {
                ans2 = 0;
            }
        }
        if(ans1 & ans2) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }

    
    }
}
