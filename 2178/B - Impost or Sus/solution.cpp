#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt=0;
        int n = s.size();
        if(s[0]=='u'){
            s[0]='s';
            cnt++;
        }
        if(s[n-1]=='u'){
            s[n-1]='s';
            cnt++;
        }
        for(int i=1;i<n-1;i++){
            if(s[i]=='u'){
                if(s[i-1]!='s'){
                    s[i-1]='s';
                    cnt++;
                }
                if(s[i+1]!='s'){
                    s[i+1]='s';
                    cnt++;
                }
            }
        }
        cout<<cnt<<'
';
 
 
    }
 
    return 0;
}