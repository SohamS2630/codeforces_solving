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
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                s.erase(i,1);
                break;
            }
        }
        for(int i=0;i<n-1;i++){
            if(s[i]=='0'){
                s.erase(i,1);
                break;
            }
        }
        cout<<s<<'
';
        
    }
 
    return 0;
}