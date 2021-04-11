#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;scanf("%d", &n);
    vector<vector<int>> gift;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        for(int j=0;j<k;j++){
            int a;cin>>a;
            gift[i].push_back(a);
        }
    }
}