#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int qt, price;
        cin>>qt>>price;
        unsigned int cost = qt*price;
        cout<<fixed;
        if(qt>1000){
            cout<<setprecision(6)<<cost*0.9<<"\n";
        }else{
            cout<<setprecision(6)<<(float)cost<<"\n";
        }
    }
    return 0;
}