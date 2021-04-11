#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> a(n);
        vector<ll> freq(101);
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            freq[a[i]]++;
        }
        ll b[n];
        int j = 0;
        for(int i = 0; i < n; i++) {
            while(i < n) {
                if(freq[j] != 0) {
                    b[i] = j;
                    freq[j]--;
                    j = (j + 1)%101;
                    break;
                } else {
                    j = (j + 1)%101;
                }
            }
        }
        for(int i = 0; i < n; i++) {
            cout<<b[i]<<" ";
        }
        cout<<"\n";
    }
}
