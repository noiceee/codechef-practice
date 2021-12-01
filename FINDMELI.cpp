#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==k){
            cout<<1;
            return(0);
        }
    }
    cout<<-1;
    return 0;
}