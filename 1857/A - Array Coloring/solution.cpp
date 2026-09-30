#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0){
                cnt+=1;
            }
        }
        if(cnt%2==1){
            cout<<"NO"<<'
';
        }
        else{
            cout<<"YES"<<'
';
        }
    }
 
    return 0;
}