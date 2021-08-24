#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        int ans = 0;
        int step = 1;
        while(true) {
            int sorted = 1;
            for(int i = 0; i + 1 < n; i++) {
                if(a[i] > a[i + 1]) {
                    sorted = 0;
                    break;
                }
            }
            if(sorted) {
                break;
            }
            if(step%2 == 1) {
                for(int i = 0; i + 1 < n; i += 2) {
                    if(a[i] > a[i + 1]) {
                        swap(a[i], a[i+1]);
                    }
                }
            } else {
                for(int i = 1; i + 1 < n; i += 2) {
                    if(a[i] > a[i+1]) {
                        swap(a[i], a[i+1]);
                    }
                }

            }
            ans++;
            step++;
        }
        cout<<ans<<"\n";
    
    }
}
