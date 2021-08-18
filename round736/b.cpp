#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        string s1,s2; cin>>s1>>s2;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(s2[i] == '1') {
                if(s1[i] == '0') {
                    ans++;
                } else {
                    int set = 0;
                    if(i != 0) {
                        if(s1[i - 1] == '1') {
                            ans++;
                            s1[i - 1] = '0';
                            set = 1;
                        }
                    }
                    if(i != n - 1 && !set) {
                        if(s1[i + 1] == '1') {
                            ans++;
                            s1[i + 1] = '2';
                        }
                    } 
                }
            }
        }
        cout<<ans<<"\n";
    }
}
