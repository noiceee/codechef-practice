#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    (t%4)?--t:++t;
    cout<<t;
    return 0;
}