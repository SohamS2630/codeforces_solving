#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long x;
        long long n;
        cin>>x>>n;
        if(x%2==0){
            if(n%4==0){
                cout<<x<<'
';
            }
            else if(n%4==2){
                cout<<x+1<<'
';
            }
            else if(n%4==1){
                cout<<x-n<<'
';
            }
            else{
                cout<<x+n+1<<'
';     
            }
        }
        else{
            if(n%4==0){
                cout<<x<<'
';
            }
            else if(n%4==2){
                cout<<x-1<<'
';
            }
            else if(n%4==1){
                cout<<x+n<<'
';
            }
            else{
                cout<<x-n-1<<'
';     
            }
        }
 
    }
 
    return 0;
}