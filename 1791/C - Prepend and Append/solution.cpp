#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;//101010
        cin>>s;
        bool flag=true;
        if(n==1){
            cout<<1<<'
';
        }
        else{
            for(int i=0;i<n/2;i++){
                if(s[i]==s[n-i-1]){
                    cout<<n-(2*(i))<<'
';
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<n%2<<'
';
            }
        }
    }
 
    return 0;
}