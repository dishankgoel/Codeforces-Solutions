#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n;
vector<int> vis;
vector<vector<int>> G;
int ans;

int dfs(int node) {
    vector<int> pos;
    int val = 1;
    vis[node] = 1;
    for(int i = 0; i < G[node].size(); i++) {
        int child = G[node][i];
        if(vis[child] == 0) {
            int v = dfs(child) + 1;
            val = max(val, v);
            pos.push_back(v);
        }
    }
    sort(pos.begin(), pos.end());
    if(pos.size() == 1) {
        ans = max(ans, pos[0]);
    } else if(pos.size() > 1) {
        int e = pos.size();
        ans = max(ans, pos[e - 1] + pos[e - 2] - 1);
    }
    return val;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n == 1)  {cout<<"0\n"; return 0;}
    G = vector<vector<int>>(n);
    vis = vector<int>(n, 0);
    ans = 0;
    for(int i = 0; i < n - 1; i++) {
        int a,b; cin>>a>>b; a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dfs(0);
    cout<<3*(ans - 1)<<"\n";

}
