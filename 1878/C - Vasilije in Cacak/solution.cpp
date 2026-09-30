#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        long long x;
        cin>>n>>k;
        cin>>x;
        long long  mini_sum=k*(k+1)/2;
 
        long long maxi_sum=k*(n-k+1+n)/2;
 
        if(x<=maxi_sum && x>=mini_sum){
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