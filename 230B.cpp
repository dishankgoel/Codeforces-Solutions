#include<bits/stdc++.h>
using namespace std;

vector<int> sieve(int n){
    vector<int> primes;
    for(int i=0;i<n+1;i++){
        primes.push_back(0);
    }
    primes[1] = 1;
    for(int i=2;i<n+1;i++){
        if(primes[i] == 0){
            for(int j=2*i;j<n+1;j = j+i){
                primes[j] = 1;
            }
        }
    }
    return primes;
}

int main(){
    int n;
    scanf("%d", &n);
    vector<int> primes = sieve(1000000);
    for(int i=0;i<n;i++){
        long long t;cin>>t;
        double root = sqrt(t);
        if(root == (int)root){
            if(!primes[root]){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else{
            printf("NO\n");
        }
    }

}