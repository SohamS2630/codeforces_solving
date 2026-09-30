#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long x,y,k;
        cin>>x>>y>>k;
        long long t;
        //t=ceil(double(k+k*y-1)/(x-1));not working due to long long and double
        //so alternate of ceil(a/b) is a+b-1/b
        t=((k+k*y-1)+(x-1)-1)/(x-1);
        cout<<t+k<<'
';
    }
 
    return 0;
}