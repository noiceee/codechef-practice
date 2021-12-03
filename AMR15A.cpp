#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, win=0;
    cin>>t;
    vector<int> arr(t);
    for(int i=0; i<t; i++){
        cin>>arr[i];
        if(!(arr[i]%2)){
            win++;
        }else{
            win--;
        }
    }
    if(win>0){
        cout<<"READY FOR BATTLE";
    }else{
        cout<<"NOT READY";
    }
    return 0;
}