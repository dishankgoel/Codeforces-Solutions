#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    struct node* left;
    struct node* right;
};

typedef struct node node;

node* new_node(int val){
    node* newnode = (node*)malloc(sizeof(node));
    newnode->val = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void insert(node* root, int m){
    if(root!=NULL){
        if(2*root->val <= m){
            root->left = new_node(root->val - 1);
            root->right = new_node(2*root->val);
            insert(root->left, m);
            insert(root->right, m);
        }
    }
}

int bfs(int n, int m){
    if(m < n){
        return n-m;
    }
    unordered_map<int, int> d;
    queue<pair<int, int>> q;
    q.push(pair<int,int>(n,0));
    int ans = 0;int curr = n;
    while(!q.empty()){
        curr = q.front().first;
        d[curr] = 0;
        if(curr == m){
            ans = q.front().second;break;
        }
        if(d.find(curr - 1) == d.end() && curr - 1 <= 2*m){
            q.push(pair<int, int>(curr - 1 , q.front().second + 1));
        }
        if(d.find(2*curr ) == d.end() && 2*curr <= 2*m){
            q.push(pair<int, int>(2*curr , q.front().second + 1));
        }
        q.pop();
    }
    return ans;

}

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    printf("%d", bfs(n,m));

}