#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        if(n==1){
            cout<<"no\n";
            continue;
        }
        if(n==2){
            cout<<"yes\n";
            continue;
        }
        int flag = 1;
        for(int i=2; i<=sqrt(n); i++){
            if(n%i == 0){
                cout<<"no\n";
                flag = 0;
                break;
            }
        }
        if(flag){
            cout<<"yes\n";
        }
    }
    return 0;
}