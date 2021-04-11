#include <bits/stdc++.h>
using namespace std;


void addedge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int bfs(vector<int> adj[], vector<int> &visited,vector<int> &coins, int start){
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    int min_in_conn = coins[start];
    while(!q.empty()){
        for(int i=0;i<adj[q.front()].size();i++){
            if(visited[adj[q.front()][i]] == 0){
                q.push(adj[q.front()][i]);
                visited[adj[q.front()][i]] = 1;
                min_in_conn = min(min_in_conn, coins[adj[q.front()][i]]);
            }
        }
        q.pop();
    }
    return min_in_conn;

}



int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    vector<int> adj[n];
    vector<int> coins;
    vector<int> visited(n, 0);
    for(int i=0;i<n;i++){
        int c;scanf("%d", &c);
        coins.push_back(c);
    }
    for(int i=0;i<m;i++){
        int u,v;
        scanf("%d %d", &u, &v);
        addedge(adj, u-1, v-1);
    }
    long long ans = 0;
    for(int i=0;i<n;i++){
        if(visited[i] == 0){
            ans += bfs(adj,visited, coins, i);
        }
    }
    cout<<ans;

}