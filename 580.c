#include <stdlib.h>
#include <stdio.h>
#define MAX_VAL 1000000
int n,m;
int ans = 0;
int min(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}
void dfs(int graph[n][n], int v, int* visited, int* ptr, int* c, int curr_m){
    visited[v-1] = 1;
    if(ptr[v-1] == 1 && v != 1){
        if(c[v-1] == 1 && curr_m + 1 <= m){
            ans++;
        }else if(c[v-1] == 0 && curr_m <= m){
            ans++;
        }
    }
    for(int i=0;i<ptr[v-1];i++){
        if(!visited[graph[v-1][i] - 1]){
            if(c[v-1] == 1 && curr_m <= m){
                dfs(graph, graph[v-1][i], visited, ptr, c, curr_m + 1);
            }else if(curr_m > m){
                dfs(graph, graph[v-1][i], visited, ptr, c, m);
            }else{
                dfs(graph, graph[v-1][i], visited, ptr, c, 0);
            }
        }
    }
}


int main(){
    scanf("%d %d", &n,&m);
    int c[n];
    for(int i=0;i<n;i++){
        scanf("%d", &c[i]);
    }
    int ptr[n], visited[n];
    for(int i=0;i<n;i++){
        ptr[i] = 0;
        visited[i] = 0;
    }
    int graph[n][n];
    for(int i=0;i<n-1;i++){
        int x,y;
        scanf("%d %d", &x,&y);
        graph[x-1][ptr[x-1]] = y;
        graph[y-1][ptr[y-1]] = x;
        ptr[x-1]++;ptr[y-1]++;
    }
    int curr_m;
    if(c[0]){
        curr_m = 1;
    }else{
        curr_m = 0;
    }
    dfs(graph, 1, visited, ptr, c, 0);
    printf("%d", ans);

    return 0;
}