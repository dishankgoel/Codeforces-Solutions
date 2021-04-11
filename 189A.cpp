#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans=0;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if((float((n-a*i-b*j)/float(c)) == int((n-a*i-b*j)/c))&&(int((n-a*i-b*j)/c) >= 0)&&(int((n-a*i-b*j)/c) < n+1)){
                ans = max(ans, i+j+((n-a*i-b*j)/c));
            }
        }
    }
    cout<<ans;
    
}