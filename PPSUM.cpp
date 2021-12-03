#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int d, n; cin>>d>>n;
        while(d--){
            n = n*(n+1)/2;
        }
        cout<<n<<"\n";
    }
    return 0;
}