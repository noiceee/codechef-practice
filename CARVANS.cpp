#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int min = INT32_MAX, ans = 0;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr.at(i)<=min){
                ans++;
                min = arr.at(i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}