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
        if(n%2==0){
 
            cout<<2<<'
';
            cout<<1<<" "<<n<<'
';
            cout<<1<<" "<<n<<'
';
        }
        else{
            cout<<4<<'
';
            cout<<1<<" "<<n-1<<'
';
            cout<<1<<" "<<n-1<<'
';
            cout<<n-1<<" "<<n<<'
';
            cout<<n-1<<" "<<n<<'
';    
        }
    }
 
    return 0;
}