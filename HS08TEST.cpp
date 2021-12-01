#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x;
    float y;
    cin>>x>>y;
    if(x%5==0){
        (y-0.5>=x)?cout<<fixed<<setprecision(2)<<y-0.5-x:cout<<fixed<<setprecision(2)<<y;
    }else{
        cout<<fixed<<setprecision(2)<<y;
    }
    return 0;
}