#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        int hash=0;
        bool flag=true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                count+=1;
                if(count==3){
                    cout<<2<<'
';
                    flag=false;
                    break;
                }
            }
            else{
                count=0;
                hash+=1;
            }
        }
        if(flag){
            cout<<s.size()-hash<<'
';
        }
    }
 
    return 0;
}