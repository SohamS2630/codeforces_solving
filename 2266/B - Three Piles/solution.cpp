#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
 
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a<=b){
            cout<<max(abs(a-b),abs(a+c-b))<<'
';
        }
        else{
            cout<<abs(a+c-b)<<'
';
        }
    }
 
    return 0;
}