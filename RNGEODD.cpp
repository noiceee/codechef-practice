#include <iostream>
using namespace std;

int main(){
    int l, r;
    cin>>l>>r;
    for(l; l<=r; l++){
        if(l%2==1){
            cout<<l<<" ";
        }
    }
    return 0;
}