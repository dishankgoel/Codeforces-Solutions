#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        vector<int> ifone(n);
        int found = 0;
        for(int i = 1; i < n; i++) {
            if(found == 1) {
                ifone[i] = 1;
            } else {
                if(s[i] == '1' && s[i-1] == '1') {
                    found = 1;
                    ifone[i] = 1;
                } else {
                    ifone[i] = 0;
                }
            }
        }
        int ans = 1;
        for(int i = 1; i < n; i++) {
            if(s[i] == '0' && s[i - 1] == '0') {
                if(ifone[i] == 1) {
                    ans = 0;
                    break;
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
