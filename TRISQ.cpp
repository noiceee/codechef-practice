#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int b;
        cin>>b;
        if(b<4){
            cout<<0<<"\n";
        }else{
            int n = b/2-1;
            cout<<n*(n+1)/2<<"\n";
        }
    }
    return 0;
}