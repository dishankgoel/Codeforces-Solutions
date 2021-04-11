#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;scanf("%d", &n);
    int f[n];
    vector<int> present(n,0);
    stack<int> s;
    for(int i=0;i<n;i++){
        cin>>f[i];
        if(f[i] != 0){
            present[f[i] - 1] = 1;
        }
    }
    for(int i=0;i<n;i++){
        if(!present[i]){
            s.push(i);
        }
    }
    for(int i=0; i < n ; i++){
        if(f[i] == 0){
            if(i != s.top()){
                f[i] = s.top() + 1;
                s.pop();
            }else{
                int top = s.top();
                s.pop();
                f[i] = s.top() + 1;
                s.pop();
                s.push(top);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<f[i]<<" ";
    }

}