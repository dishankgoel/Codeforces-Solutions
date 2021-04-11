#include <bits/stdc++.h>
using namespace std;


int solve(int a1, int a2, int current){
    int a = current;
    if((a1 - 2 < 0)&&(a2 - 2 < 0)){
        return a;
    }
    if((a1 == 2)&&(a2 - 2 <= 0)){
        return a+1;
    }
    if((a1 - 2 <= 0)&&(a2 == 2)){
        return a+1;
    }
    if(a1 <= a2){
        int ans = solve(a1+1,a2-2,a+1);
        return ans;
    }else{
        int ans = solve(a1-2,a2+1,a+1);
        return ans;

    }
}

int main(){
    int a1,a2;
    cin>>a1>>a2;
    cout<<solve(a1,a2,0);

}
