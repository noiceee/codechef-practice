#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int salary;
        cin>>salary;
        if(salary<1500){
            cout<<fixed<<setprecision(2)<<salary+salary*0.9+salary*0.1<<"\n";
        }else{
            cout<<fixed<<setprecision(2)<<salary+500+salary*0.98<<"\n";
        }
    }
    return 0;
}