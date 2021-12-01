#include <iostream>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(){
    fastio;
    int n, k, x, ans=0;
    cin>>n>>k;
    while(n--){
        cin>>x;
        if(x%k == 0){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}