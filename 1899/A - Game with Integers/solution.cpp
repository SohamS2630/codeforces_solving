#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if((n%3==0 && n>=3)){
            cout<<"Second"<<'
';
        }
        else if((n%3==2 || n==2) || (n%3==1 || n==1)){
            cout<<"First"<<'
';
        }
    }
 
    return 0;
}