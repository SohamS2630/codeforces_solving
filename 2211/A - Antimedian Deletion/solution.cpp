#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
        cin>>arr[i];
       } 
       if(n<=2){
        for(int i=0;i<n;i++){
            cout<<n<<" ";
        }
       }
       else{
        for(int i=0;i<n;i++){
            cout<<2<<" ";
        }
       }
       cout<<'
';
    }
 
    return 0;
}