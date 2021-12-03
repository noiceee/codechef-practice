#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        int hue = 1, ans = 0;
        if(p>=4096){
            ans = p/2048;
            p %= 2048;
        }
        while(p>0){
            p = p - (int)pow(2,(int)log2(p));
            ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}