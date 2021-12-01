#include <iostream>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    fastio;
    int t, g;
    cin>>t;
    while(t--){
        cin>>g;
        while(g--){
            int i, n, q;
            cin>>i;  //1 is head, 2 is tails
            cin>>n>>q;
            if(q == i){
                cout << n/2 << endl;
            } else{
                cout << n/2 + n%2 << endl;
            }
        }
    }
    return 0;
}