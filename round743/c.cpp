#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<vector<int>> v(n, vector<int>());
        queue<int> curr;
        for(int i = 0; i < n; i++) {
            int k; cin>>k;
            // vector<int> p;
            if(k == 0) {
                curr.push(i);
            }
            for(int j = 0; j < k; j++) {
                int x; cin>>x; x--;
                //p.push_back(x);
                v[x].push_back(i);
            }
            //v[i] = p;
        }
        int ans = 0;
        if(curr.empty()) {
            cout<<"-1\n";
        } else {
            while(!curr.empty()) {
                queue<int> new_curr;
                while(!curr.empty()) {
                    int c = curr.front();
                    for(int j = 0; j < v[c].size(); j++) {
                        if(v[c][j] < c) {
                            new_curr.push(v[c][j]);
                        } else {
                            curr.push(v[c][j]);
                        }
                    }
                    curr.pop();
                }
                curr = new_curr;
                ans++;
            }
            cout<<ans<<"\n";
        }



    }
}
