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
        int s = arr[0];
        int sum=0;
        for(int i=1;i<n;i++){
            if(arr[i]>s){
                arr[i]=s;
            }
            else{
                s=arr[i];
            }
            sum+=arr[i];
        }
        cout<<sum+arr[0]<<'
';
    }
    return 0;
}