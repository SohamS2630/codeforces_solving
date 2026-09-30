#include <iostream>
using namespace std;
 
int main() {
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a+b-c==0){
            cout<<"YES"<<'
';
        }
        else if(a+c-b==0){
            cout<<"YES"<<'
';
        }
        else if(c+b-a==0){
            cout<<"YES"<<'
';
        }
        else{
            cout<<"NO"<<'
';
        }
    }
 
    return 0;
}