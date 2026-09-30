#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        while(n%2==0 and n!=0){
            n=n/2;
        }
        if(n%2!=0 && n>1){
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