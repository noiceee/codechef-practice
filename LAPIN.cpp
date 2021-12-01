#include<bits/stdc++.h>

using namespace std;

void sort(string& str){
    int len = str.length();
    for(int i=0; i<len-1; i++){
        for(int j=0; j<len-1-i; j++){
            if(str[j]>str[j+1]){
                swap(str[j], str[j+1]);
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len = s.size();
        // int flag = 1;
        // for(int i=0; i<len/2; i++){
        //     if(s[i]==s[i+len/2+len%2]){}
        //     else{
        //         flag = 0;
        //     }
        // }
        // if(flag){
        //     cout<<"YES"<<endl;
        // }else{
        //     cout<<"NO"<<endl;
        // }
        string sub1 = s.substr(0, len/2), sub2 = s.substr(len/2+len%2);
        sort(sub1);
        sort(sub2);
        int flag = 1;
        for(int i=0; i<sub1.length(); i++){
            if(sub1[i] != sub2[i]){
                cout<<"NO"<<endl;
                flag = 0;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}