#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 0, i=5;
        while(n/i){
            ans += n/i;
            i *= 5;
        }
        cout << ans << endl;
    }
    return 0;
}