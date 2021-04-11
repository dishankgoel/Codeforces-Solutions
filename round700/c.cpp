#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
        int n; cin>>n;
        if(n == 1) {
            cout<<"! 1\n";
            fflush(stdout);
        } else if(n == 2) {
            cout<<"? 1\n";
            fflush(stdout);
            int x1;
            cin>>x1;
            if(x1 == 1) {
                cout<<"! 1\n";
                fflush(stdout);
            } else {
                cout<<"! 2\n";
                fflush(stdout);
            }
        } else {
            int b = 1, e = n;
            int ans = 1;
            while(b <= e) {
                int mid = b + (e - b)/2;
                if(mid == 1 || mid == n) {
                    ans = mid;
                    break;
                } else {
                    int x1,x2,x3;
                    cout<<"? "<<mid - 1<<"\n";
                    fflush(stdout);
                    cin>>x1;
                    cout<<"? "<<mid<<"\n";
                    fflush(stdout);
                    cin>>x2;
                    cout<<"? "<<mid + 1<<"\n";
                    fflush(stdout);
                    cin>>x3;
                    if(x1 < x2) {
                        e = mid - 1;
                    } else if(x3 < x2) {
                        b = mid + 1;
                    } else {
                        ans = mid;
                        break;
                    }
                }

            }
            cout<<"! "<<ans<<"\n";
            fflush(stdout);
        }
}
