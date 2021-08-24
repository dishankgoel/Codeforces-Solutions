#include<bits/stdc++.h>
#define ll long long

using namespace std;

int check(int a, int b, int n1, int n0, int k) {
    int x;
    x = k - n1 + a;
    if(x%2 == 0 && x >= 0) {
        x = x/2;
        if(a - x >= 0 && n0 - x >= 0 && x <= k && n1 - (a - x) >= 0 && b - (k - x) >= 0) {
            return 1;
        }
    }
    return 0;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        vector<int> ans;
        int n1 = (a+b+1)/2;
        int n0 = (a+b)/2;
        for(int k = 0; k <= a + b; k++) {
            int pos = check(a, b, n1, n0, k) || check(b, a, n1, n0, k);
            if(pos) {
                ans.push_back(k);
            }
        }
        cout<<ans.size()<<"\n";
        for(auto a: ans) {
            cout<<a<<" ";
        }
        cout<<"\n";
    }
}
