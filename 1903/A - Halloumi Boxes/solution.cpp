#include <iostream>
using namespace std;
 
int main() {
    int t,k,n;
    cin>>t;
    while(t--){
        bool flag=true;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(k==1){
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    cout<<"NO"<<'
';
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                cout<<"YES"<<'
';
            }
            
        }
        else{
            cout<<"YES"<<'
';
        }
    }
 
    return 0;
}