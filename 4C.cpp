#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    map<string, int> d;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(d.find(s) == d.end()){
            printf("OK\n");
            d.insert(pair<string, int>(s, 1));
        }else{
            int val = d.find(s)->second;
            d.at(s) += 1;
            d.insert(pair<string, int>(s + to_string(val), 1));
            cout<<(s + to_string(val))<<"\n";
        }
    }
}