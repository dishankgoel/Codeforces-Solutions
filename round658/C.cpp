#include<bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> flipa(vector<int> a2, int l){
    vector<int> here(a2.begin(), a2.end());
    for(int i = 0; i < l/2; i++){
        int newai, newal;
        if(here[i] == '0'){
            newal = '1';
        }else{
            newal = '0';
        }
        if(here[l - 1 - i] == '0'){
            newai = '1';
        }else{
            newai = '0';
        }
        here[i] = newai;
        here[l-1-i] = newal;
    }
    if(l%2 == 1){
        if(here[l/2] == '0'){
            here[l/2] = '1';
        }else{
            here[l/2] = '0';
        }
    }
    // cout<<"=======\n";
    // cout<<a2.size()<<"\n";
    // for(int i = 0; i< a2.size(); i++){
    //     cout<<(char)here[i]<<" ";
    // }
    // cout<<"\n";
    return here;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string a,b;
        vector<int> a1;
        vector<int> b1;
        cin>>a>>b;
        for(int i = 0; i < n; i++){
            a1.push_back(a[i]);
            b1.push_back(b[i]);
        }
        vector<int> ans;
        while(!a1.empty()){
            if(a1.back() == b1.back()){
            }else{
                if(a1[0] == b1.back()){
                    ans.push_back(1);
                    a1 = flipa(a1, 1);
                    ans.push_back(a1.size());
                    a1 = flipa(a1, a1.size());
                }else{
                    ans.push_back(a1.size());
                    a1 = flipa(a1, a1.size());
                }
            }
            a1.pop_back();
            b1.pop_back();
        }
        cout<<ans.size()<<" ";
        for(int i = 0;i < ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

    }
}
