#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int min = INT32_MAX, count = 0, min2 = INT32_MAX;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr.at(i);
            if(arr[i]<min){
                min2 = min;
                min = arr[i];
                count = 1;
            }else if(arr[i] == min){
                count++;
            }else if(arr[i]<min2){
                min2 = arr[i];
                continue;
            }
        }
        if(count>1){
            cout<<min*2<<"\n";
        }else{
            // cout<<"min1: "<<min<<" min2: "<<min2<<"\n";
            cout<<min+min2<<"\n";
        }
    }
    return 0;
}