#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y;
    cin>>n;
    while(n--){
        cin>>x>>y;
        cout<<x+y<<"\n";
    }
    return 0;
}