#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt0=0;
        int cnt1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                cnt0++;
            }
            else{
                cnt1++;
            }
        }
        if(min(cnt0,cnt1)%2==0){
            cout<<"NET"<<'
';
        }
        else{
            cout<<"DA"<<'
';
        }
    }
 
    return 0;
}