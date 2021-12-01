#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        if(a>=b && a<=c  || a>=c && a<=b){
            cout << a <<"\n";
        } else if(b>=a && b<=c || b>=c && b<=a){
            cout << b << "\n";
        } else{
            cout << c <<"\n";
        }
    }
    return 0;
}