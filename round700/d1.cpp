#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    vector<int> s1, s2;
    s1.push_back(0);
    s2.push_back(0);
    for(int i = 0; i < n; i++) {
        if(a[i] != s1.back()) {
            s1.push_back(a[i]);
        } else if(a[i] != s2.back()) {
            s2.push_back(a[i]);
        } else {
            s1.push_back(a[i]);
        }
    }
    int x1 = 0, x2 = 0;
    for(int i = 1; i < s1.size() - 1; i++) {
        if(s1[i] != s1[i + 1]) {
            x1++;
        }
    }
    if(s1.size() > 1) {
        x1++;
    }
    for(int i = 1; i < s2.size() - 1; i++) {
        if(s2[i] != s2[i + 1]) {
            x2++;
        }
    }
    if(s2.size() > 1) {
        x2++;
    }
    cout<<x1 + x2<<"\n";
}
