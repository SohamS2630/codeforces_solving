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
        int o=0;
        int c=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                o+=1;
            }
            else{
                c+=1;
            }
            if(c>o){
                cnt++;
                o=0;
                c=0;
            }
        }
        cout<<cnt<<'
';
    }
 
    return 0;
}