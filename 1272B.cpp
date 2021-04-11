#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;scanf("%d", &q);
    while(q--){
        string s;
        cin>>s;
        int up=0,down=0,left=0,right=0;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i] == 'U'){up++;}
            if(s[i] == 'D'){down++;}
            if(s[i] == 'L'){left++;}
            if(s[i] == 'R'){right++;}
        }
        int to_delete = 0;
        if(up != down){
            if(up > down){
                to_delete += up - down;
                up = down;
            }else{
                to_delete += down - up;
                down = up;
            }
        }
        if(left != right){
            if(left > right){
                to_delete += left - right;
                left = right;
            }else{
                to_delete += right - left;
                right = left;
            }
        }
        if(up == 0 && left == 0){
            cout<<0<<"\n"<<"\n";
        }else{
            if(up == 0 || left == 0){
                if(up == 0){
                    to_delete += 2*left - 2;
                    left = 1;
                    right = 1;
                }
                if(left == 0){
                    to_delete += 2*up - 2;
                    down = 1;
                    up = 1;
                }
            }
            cout<<n-to_delete<<"\n";
            for(int i=0;i<up;i++){
                cout<<'U';
            }
            for(int i=0;i<right;i++){
                cout<<'R';
            }
            for(int i=0;i<down;i++){
                cout<<'D';
            }
            for(int i=0;i<left;i++){
                cout<<'L';
            }
            cout<<"\n";
        }
    }
}