#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll n; cin>>n;
    ll quasi[65] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 100000, 100001, 100010, 100011, 100100, 100101, 100110, 100111, 101000, 101001, 101010, 101011, 101100, 101101, 101110, 101111, 110000, 110001, 110010, 110011, 110100, 110101, 110110, 110111, 111000, 111001, 111010, 111011, 111100, 111101, 111110, 111111, 1000000};
    // cout<<sizeof(quasi)/sizeof(ll)<<"\n";
    vector<vector<int>> dp(n+1, vector<int>{});
    ll vals[n+1];
    vals[0] = 0;
    vals[1] = 1;
    dp[0] = vector<int>{};
    dp[1] = vector<int>{1};
    for(int i = 2; i <= n; i++){
        int start = lower_bound(quasi, quasi + 65, i) - quasi;
        // start--;
        if(quasi[start] != i){
            start--;
        }
        // cout<<start<<" ";
        ll min_el = vals[i - quasi[start]];
        ll min_index = start;
        for(int t = start-1; t > 0; t--){
            if(vals[i - quasi[t]] < min_el){
                min_el = vals[i - quasi[t]];
                min_index = t;
            }
        }
        vals[i] = vals[i - quasi[min_index]] + 1;
        dp[i] = dp[i - quasi[min_index]];
        dp[i].push_back(quasi[min_index]);
    }
    // cout<<"\n";
    cout<<vals[n]<<"\n";
    for(int i = 0 ;i < dp[n].size(); i++){
        cout<<dp[n][i]<<" ";
    }

}