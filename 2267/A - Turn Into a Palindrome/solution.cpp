#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        int op=0;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                if(s[i]==c){
                    op+=1;
                }
                else if(s[n-i-1]==c){
                    op+=1;
                }
                else{
                    op+=2;
                }
            }
        }
        cout<<op<<'
';
    }
 
    return 0;
}