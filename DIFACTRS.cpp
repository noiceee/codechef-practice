#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n, ans = 1;
    cin>>n;
    if (n == 1)
    {
        cout << 1 <<endl<<1;
    }
    else
    {   
        vector<int> arr;
        for (int i = 1; i <= n/2; i++)
        {
            if(n%i==0){
                ans++;
                arr.push_back(i);
            }
        }
        cout<<ans<<endl;
        for(int i=0; i<ans-1; i++){
            cout<<arr.at(i)<<" ";
        }
        cout<<n;
    }
    return 0;
}