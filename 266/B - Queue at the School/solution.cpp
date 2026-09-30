#include <iostream>
using namespace std;
 
int main() {
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int j=0;j<t;j++){
        int i=1;
        while(i<n){
            if(s[i]=='G' && s[i-1]=='B'){
                s[i]='B';
                s[i-1]='G';
                i++;
 
            }
            i++;
        }
    }
    cout<<s<<'
';
 
    return 0;
}