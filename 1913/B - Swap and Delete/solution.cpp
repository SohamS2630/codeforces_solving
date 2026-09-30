#include <iostream>
#include <climits>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count0=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                count0++;
            }
        }
        int count1=s.size()-count0;
        if(count0==count1){
            cout<<0<<'
';
        }
        else{
            for(int i=0;i<s.size();i++){
                if(s[i]=='0' && count1!=0){
                    count1--;
                }
                else if(s[i]=='1' && count0!=0){
                    count0--;
                }
                else{
                    cout<<s.size()-(i)<<'
';
                    break;
                }
            }
        }
    }
 
    return 0;
}