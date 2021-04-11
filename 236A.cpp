#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> freq;
    string s;
    getline(cin, s);
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(freq.find(s[i]) == freq.end()){
            count++;
            freq.insert(pair<char, int>(s[i], 1));
        }
    }
    if(count&1){
        printf("IGNORE HIM!");
    }else{
        printf("CHAT WITH HER!");
    }
}