#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int k;cin>>k;
        int ans = 1;
        int num = 1;
        int c = 1;
        while(c <= k) {
            string p = to_string(num);
            if(num%3 == 0 || p[p.size() - 1] == '3') {
            } else {
                if(c == k) {
                    ans = num;
                    break;
                }
                c++;
            }
            num++;
        }
        cout<<ans<<"\n";    
    }
}
