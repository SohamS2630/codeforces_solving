#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(a==b && b==n){
            cout<<"YES"<<'
';
        }
        else if(a+b>=n || a+b+1==n){
            cout<<"NO"<<'
';
        }
        else{
            cout<<"YES"<<'
';
        }
    }
 
    return 0;
}