#include <iostream>
#include <string>
using namespace std;

int main(){
    // fastio;
    int t, n;
    string nationality;
    string CONTEST_WON("CONTEST_WON");
    string TOP_CONTRIBUTOR("TOP_CONTRIBUTOR");
    string BUG_FOUND("BUG_FOUND");
    string CONTEST_HOSTED("CONTEST_HOSTED");
    string INDIAN("INDIAN");
    string NON_INDIAN("NON_INDIAN");

    cin>>t;
    while(t--){
        cin>>n;
        cin>>nationality;
        string str;
        int totalLaddus = 0;
        while(n--){
            cin>>str;
            if(str == CONTEST_WON){
                int x;
                cin>>x;
                totalLaddus += 300;
                if(x<20){
                    totalLaddus += 20-x;
                }
            }else if(str == BUG_FOUND){
                int x;
                cin>>x;
                totalLaddus += x;
            }else if(str == TOP_CONTRIBUTOR){
                totalLaddus += 300;
            }else{
                totalLaddus += 50;
            }
        }
        if(nationality == INDIAN){
            cout<<totalLaddus/200<<endl;
        }else{
            cout<<totalLaddus/400<<endl;
        }
    }
    return 0;
}