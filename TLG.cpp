#include <iostream>
using namespace std;

inline int abs(int x){
    if(x>0){
        return x;
    }else{
        return -1*x;
    }
}

int main(){
    int t;
    int winner = 0;
    int lead = 0;
    int a = 0, b = 0;
    cin>>t;
    for(int i=0; i<t; i++){
        int x, y;
        cin>>x>>y;
        a+=x;b+=y;
        if(abs(a-b)>lead){
            lead = abs(a-b);
            (a>b)?winner=1:winner=2;
        }
    }
    cout<<winner<<" "<<lead;
    return 0;
}