#include <iostream>
#include <cmath>
using namespace std;

int mpow(int a, int b){
    int temp = a;
    if(!b){
        return 1;
    }
    while(--b){
        a *= temp;
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        // int n; cin>>n;
        // int flag = 1;
        // int digit = log10(n) + 1;
        // cout<<"digit initial "<<digit<<endl;
        // for(int i=0; i<digit/2; i++){
        //     cout<<n<<" first: "<<n/mpow(10, digit-i-1)<<" Second: "<< n%mpow(10, i+1) <<endl;
        //     cout<<"Powers: "<<mpow(10, digit-i-1)<<" "<<mpow(10, i+1)<<endl;
        //     if(n/mpow(10, digit-i-1) != n%mpow(10, i+1)){
        //         cout<<"loses\n";
        //         flag = 0;
        //         break;
        //     }
        // }
        // if(flag){
        //     cout<<"wins\n";
        // }
        // try kiya par aise krna tough hora, toh wahi good  ol strumg methud
        // Going through other submissions, better approach to reverse the no., well obviously, above approach clogged my brain xdd.

        string huehue;
        cin>>huehue;
        int len = huehue.size(), flag = 1;
        for(int i=0; i<len/2; i++){
            if(huehue.at(i) != huehue.at(len - i - 1)){
                flag = 0;
                cout<<"loses\n";
                break;
            }
        }
        if(flag){
            cout<<"wins\n";
        }
        
    }
    return 0;
}