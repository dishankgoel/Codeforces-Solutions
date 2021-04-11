#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){

        int n; cin>>n;
        string b; cin>>b;
        string a = b;
        a[0] = '1';
        for(int i = 1; i < n; i++) {
            if(b[i] == '0') {
                if((a[i-1] == '1' && b[i-1] == '0') || (a[i-1] == '0' && b[i-1] == '1')) {
                    a[i] = '0';
                } else {
                    a[i] = '1';
                }
            } else {
                if(a[i - 1] == '1' && b[i-1] == '1') {
                    a[i] = '0';
                } else {
                    a[i] = '1';
                }
            }
        }
        cout<<a<<"\n";
    }
}
