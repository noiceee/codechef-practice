#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int mini = min(a, b);
    int maxi = max(a, b);
    int ans = mini;
    while(maxi%mini){
        ans = maxi%mini;
        maxi = mini;
        mini = ans;
    }
    return ans;
}

int lcm(int a, int b){
    // int divider = 2, ans=1;
    // int mini = min(a, b);
    // int mininum = sqrt(mini);
    // while(divider <= mininum){
    //     if(a%divider==0 && b%divider==0){
    //         ans = divider;
    //     }
    //     divider++;
    // }
    // return ans;
    int gcdInka = gcd(a, b);
    return a/gcdInka * b/gcdInka * gcdInka;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int a, b; cin>>a>>b;
        cout<<gcd(a, b)<<" "<<lcm(a, b)<<"\n";
    }
    return 0;
}