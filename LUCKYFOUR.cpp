#include <iostream>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

inline int getFour(int n){
    int ans = 0;
    while(n>0){
        if(n%10==4){
            ans++;
        }
        n /= 10;
    }
    return ans;
}

int main(){
    fastio
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<getFour(n)<<"\n";
    }
    return 0;
}