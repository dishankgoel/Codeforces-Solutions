#include<bits/stdc++.h>
using namespace std;

int comp(const pair<int,int> &p1, const pair<int,int> &p2){
    return (p1.first > p2.first);
}

int main(){
    int n;
    scanf("%d",&n);
    pair<int,int> p[n];
    for(int i=0;i<n;i++){
        scanf("%d", &p[i].first);
        p[i].second = i+1;
    }
    sort(p, p+n,comp);
    int ans = 0;
    for(int i=0;i<n;i++){
        ans += (i)*(p[i].first) + 1;
    }
    printf("%d\n",ans);
    for(int i=0;i<n;i++){
        printf("%d ",p[i].second);  
    }

    
}