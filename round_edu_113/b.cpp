#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        vector<vector<char>> ans(n, vector<char>(n, 'x'));
        for(int i = 0; i < n; i++) {
            ans[i][i] = 'X';
        }
        int pos = 1;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                for(int j = 0; j < n; j++) {
                    if(j != i) {
                        ans[i][j] = '=';
                        ans[j][i] = '=';
                    }
                    
                }
            }
        }
        for(int i = 0; i < n; i++) {
            if(s[i] == '2') {
                int done = 0;
                for(int j = 0; j < n; j++) {
                    if(ans[i][j] == 'x' && j != i) {
                        ans[i][j] = '+';
                        ans[j][i] = '-';
                        done = 1;
                        break;
                    }
                }
                if(done == 0) {
                    pos = 0;
                    break;
                }
            }
        }
        if(pos) {
            cout<<"YES\n";
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    if(ans[i][j] == 'x') {
                        ans[i][j] = '=';
                    }
                    cout<<ans[i][j];
                }
                cout<<"\n";
            }
        } else {
            cout<<"NO\n";
        }
    }
}
