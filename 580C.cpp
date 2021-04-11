#include<bits/stdc++.h>

using namespace std;

void addedge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int ans = 0;
int m;
vector<int> visited;
vector<int> cats;

void dfs(vector<int> adj[], int u, int consec){
    visited[u] = 1;
    if(adj[u].size() == 1 && u != 0 && consec <= m){
        ans++;
    }
    for(int i=0; i < adj[u].size(); i++){
        if(visited[adj[u][i]] == 0){
            if(cats[adj[u][i]] == 1){
                dfs(adj, adj[u][i], consec + 1);
            }else if(consec > m){
                dfs(adj, adj[u][i], m+1);
            }else{
                dfs(adj, adj[u][i], 0);
            }
        }
    }
}

int main(){
    int n;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++){int c;scanf("%d", &c);cats.push_back(c);visited.push_back(0);}
    vector<int> adj[n];
    for(int i=0;i<n-1;i++){
        int u,v;scanf("%d %d", &u, &v);
        addedge(adj, u-1, v-1);
    }
    if(cats[0]){
        dfs(adj, 0, 1);
    }else{
        dfs(adj, 0, 0);
    }
    
    printf("%d", ans);

}