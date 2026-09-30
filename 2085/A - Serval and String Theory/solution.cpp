#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==0){
            string og = s;
            reverse(s.begin(),s.end());
            if(og<s){
                cout<<"YES"<<'
';
            }
            else{
                cout<<"NO"<<'
';
            }
        }
        else{
            bool f = true;
            for(int i=0;i<n;i++){
                if(s[0]!=s[i]){
                    cout<<"YES"<<'
';
                    f = false;
                    break;
                }
            }
            if(f){
                cout<<"NO"<<'
';
            }
        }
    }
 
    return 0;
}