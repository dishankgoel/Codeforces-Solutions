#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int l = -2, r = -2;
        for(int i = 0; i < n; i++) {
            int ca = 0, cb = 0;
            if(s[i] == 'a') {
                ca++;
            } else {
                cb++;
            }
            int done = 0;
            for(int j = i + 1; j < n; j++) {
                if(s[j] == 'a') {
                    ca++;
                } else {
                    cb++;
                }     
                if(ca == cb) {
                    l = i; r = j;
                    done = 1;
                    break;

                } 
            }
            if(done) {
                break;
            }
        }
        cout<<l+1<<" "<<r+1<<"\n";
    
    }
}
