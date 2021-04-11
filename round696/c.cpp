#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){

        int n;cin>>n;
        ll a[2*n];
        for(int i = 0; i < 2*n; i++) {
            cin>>a[i];
        }
        sort(a, a + 2*n);
        int done = 0;
        vector<pair<int, int>> seq(n);
        int x;
        for(int i = 0; i < 2*n - 1; i++) {
            int second = a[i];
            x = a[i] + a[2*n - 1];
            seq[0] = make_pair(second, a[2*n - 1]);
            map<int, int> present;
            for(int j = 0; j < 2*n - 1; j++) {
                if(j != i) {
                    present[a[j]]++;
                }
            }
            int completed = 1;
            int curr_x = a[2*n  - 1];
            for(int j = 0; j < n - 1; j++) {
                int curr_max_a = present.rbegin()->first;
                int curr_b = curr_x - curr_max_a;
                if(present[curr_b] > 0) {
                    if(curr_max_a == curr_b) {
                        if(present[curr_b] > 1) {
                            seq[j + 1] = make_pair(curr_max_a, curr_b);
                            curr_x = curr_max_a;
                            present[curr_b]--;
                            if(present[curr_b] == 0) {present.erase(curr_b);}
                            present[curr_max_a]--;
                            if(present[curr_max_a] == 0) {present.erase(curr_max_a);}        
                        } else {
                            completed = 0;
                            break;
                        }
                    } else {
                        seq[j + 1] = make_pair(curr_max_a, curr_b);
                        curr_x = curr_max_a;
                        present[curr_b]--;
                        if(present[curr_b] == 0) {present.erase(curr_b);}
                        present[curr_max_a]--;
                        if(present[curr_max_a] == 0) {present.erase(curr_max_a);}
                    }
                } else {
                    completed = 0;
                    break;
                }
            }
            if(completed) {
                done = 1;
                break;
            }
        }
        if(done) {
            cout<<"YES\n"<<x<<"\n";
            for(int i = 0; i < n; i++) {
                cout<<seq[i].first<<" "<<seq[i].second<<"\n";
            }
        } else {
            cout<<"NO\n";
        }
    
    }
}
