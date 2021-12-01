#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a>b){
            cout<<a<<" "<<a+b<<"\n";
        }else{
            cout<<b<<" "<<a+b<<"\n";
        }
    }
    return 0;
}