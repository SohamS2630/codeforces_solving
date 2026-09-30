#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        if(n<=3){
            cout<<min(b,n*a)<<'
';
        }
        else{
            long long three = a*3;;
            long long cost = 0;
            if(a*3>b){
                cost+=(n/3)*b;
                long long rem = n%3;
                cost+=min(a*rem,b);
            }
            else{
                cost = a*n;
            }
            cout<<cost<<'
';
        }
 
    }
 
    return 0;
}