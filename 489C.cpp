// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int m,s;
    cin>>m>>s;
    int smallest[m];
    int largest[m];
    if(s==0){
        if(m==1){
            cout<<0<<" "<<0;
        }else{
            int t=-1;
            cout<<t<<" "<<t;
        }
    }else{
        if(s > 9*m){
            int t=-1;
            cout<<t<<" "<<t;
        }else{
            int small = s-1;
            for(int i=m-1;i>0;i--){
                if(small > 9){
                    smallest[i] = 9;
                    small = small-9;
                }else{
                    smallest[i] = small;
                    small = 0;
                }
            }
            smallest[0] = small+1;
            int large = s;
            for(int i=0;i<m;i++){
                if(large > 9){
                    largest[i] = 9;
                    large = large - 9;
                }else{
                    largest[i] = large;
                    large = 0;
                }
            }
            for(int i=0;i<m;i++){
                cout<<smallest[i];
            }
            cout<<" ";
            for(int i=0;i<m;i++){
                cout<<largest[i];
            }
        }
    }
    return 0;

}