#include <bits/stdc++.h>
using namespace std;

double ans = 0;


void recurse(int n, int target){
    if(n==1 && (target == 1 || target == -1)){
        ans++;
    }else if(n!=1){
        recurse(n-1, target - 1);
        recurse(n-1, target + 1);
    }
}

int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int target = 0;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] == '+'){
            target++;
        }else{
            target--;
        }
    }
    int given = 0, n = 0;
    for(int i = 0;i < s2.length(); i++){
        if(s2[i] == '?'){
            n++;
        }else if(s2[i] == '+'){
            given++;
        }else{
            given--;
        }
    }
    target = target - given;
    if(n >= 1){
        recurse(n, target);
    }else if(target == 0){
        ans = pow(2,n);
    }else{
        ans = 0;
    }
    double t = ans/pow(2, n);
    printf("%.11f", t);
    return 0;

}