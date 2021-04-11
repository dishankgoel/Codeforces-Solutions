#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans;
        for(int i = 0; i < s.size(); i++) {
            if(i%2 == 0) {
                if(s[i] == 'a') {
                    ans.push_back('b');
                } else {
                    ans.push_back('a');
                }
            } else {
                if(s[i] == 'z') {
                    ans.push_back('y');
                } else {
                    ans.push_back('z');
                }
            }
        }
        cout<<ans<<"\n";
    }
}
