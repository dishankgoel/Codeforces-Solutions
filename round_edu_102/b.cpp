#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int n = s1.size();
        int m = s2.size();
        string lcms = s2;
        int ans = -1;
        for(int pos_lcm = 1; pos_lcm <= n*m; pos_lcm++) {
            if(pos_lcm%n == 0 && pos_lcm%m == 0) {
                int size_t1 = pos_lcm/n;
                int size_t2 = pos_lcm/m;
                string t1 = "", t2 = "";
                for(int i = 0; i < size_t1; i++) {t1 += s1;}
                for(int i = 0; i < size_t2; i++) {t2 += s2;}
                if(t1 == t2) {
                    ans = pos_lcm;
                    break;
                }
            }
        }
        if(ans != -1) {
            string sans = "";
            for(int i = 0; i < ans/n; i++) {sans += s1;}
            cout<<sans<<"\n";
        } else {
            cout<<"-1\n";
        }
    
    }

}

