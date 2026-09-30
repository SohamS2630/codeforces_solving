#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n;
        cin>>s>>x;
        int arr[n+1];
        int sum=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int rem=s-sum;
        if(rem<0){
            cout<<"NO"<<'
';
        }
        else if(x==1){
            cout<<"YES"<<'
';
        }
        else if(rem%x==0){
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