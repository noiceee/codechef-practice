#include <iostream>
using namespace std;

int main(){
    int a, b, c, max;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        (b>=c)?cout<<b:cout<<c;
    }else if(b>=a && b>=c){
        (a>=c)?cout<<a:cout<<c;
    }else{
        (b>=a)?cout<<b:cout<<a;
    }
    return 0;
}