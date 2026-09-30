#include <iostream>
#include <cmath>
using namespace std;
 
bool isprime(int n){
    if(n==1){
        return true;
    }
    else if(n==2 ||n==3){
        return false;
    }
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2 ||n==4){
            cout<<"YES"<<'
';
        }
        else if(n==3){
            cout<<"NO"<<'
';
        }
        else{
            if(isprime(n+1)){
                cout<<"YES"<<'
';
            }
            else{
                cout<<"NO"<<'
';
            }
        }
    }
 
    return 0;
}