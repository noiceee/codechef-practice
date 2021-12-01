#include <iostream>
using namespace std;

int main(){
    int n, i = 0, count = 0;
    cin>>n;
    while(count<n){
        for(int j=0; j<5; j++){
            cout<<++i<<" ";
        }
        cout<<endl;
        count++;
        i+=5;
        if(count<n){
            for(int j=0; j<5; j++){
                cout<<i--<<" ";
            }
            cout<<endl;
            i+=5;
            count++;
        }
    }
    return 0;
}