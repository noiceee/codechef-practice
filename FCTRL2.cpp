#include <iostream>
using namespace std;

string multiplication(int& a, int& b){
    int carry = 0;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, ans = 1; cin>>n;
        while(n>1){
            ans *= n;
            n--;
        }
        cout<<ans<<"\n";
    }
    return 0;
}