#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        // string n;
        // cin>>n;
        // for(int i=n.size()-1; i >= 0; i--){
        //     cout<<n[i];
        // }
        // cout<<endl;
        //haha xd, ez way tha yeh
        int n;
        cin>>n;
        int flag = 0;
        while(n>0){
            if(n%10){
                flag = 1;
            }
            if(flag){
                cout<<n%10;
            }
            n /= 10;
        }
        cout<<endl;
    }
    return 0;
}