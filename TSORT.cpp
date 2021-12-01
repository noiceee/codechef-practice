#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
    fastio;
    int t;
    cin>>t;
    vector<int> arr(t);
    for(int i=0; i<t; i++){
        cin>>arr.at(i);
    }
    sort(arr.begin(), arr.end());
    for(int i:arr){
        cout<<i<<"\n";
    }
    return 0;
}