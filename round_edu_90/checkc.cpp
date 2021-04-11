#include<bits/stdc++.h>
#define ll long long

using namespace std;

int check(string s){
    int res = 0;
    int n = s.size();
    for(int init = 0; init <= 10000000; init++){
        int cur = init;
        int ok = 1;
        for(int i = 0; i < n ;i++){
            res++;
            if(s[i] == '+'){
                cur++;
            }else{
                cur--;
            }
            if(cur < 0){
                ok = 0;
                break;
            }
        }
        if(ok){
            break;
        }

    }
    return res;
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        cout<<check(s)<<"\n";
    }
}