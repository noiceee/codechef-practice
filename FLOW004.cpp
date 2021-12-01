#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<n%10+n/(int)(pow(10, (int)log10(n)))<<"\n";
    }
    return 0;
}