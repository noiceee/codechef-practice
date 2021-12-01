#include <iostream>
using namespace std;

int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<sumOfDigits(n)<<"\n";
    }
    return 0;
}