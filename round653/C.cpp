#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        string s;cin>>s;
        int count = 0;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                count++;
            }else{
                count--;
            }
            if(count < ans){
                ans = count;
            }
        }
        cout<<abs(ans)<<"\n";
    }
}
