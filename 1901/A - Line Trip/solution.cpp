#include <iostream>
using namespace std;
 
int main() {
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int arr[n];
        int maxi=-1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(n==1){
                maxi=max(maxi,2*(x-arr[i]));
                maxi=max(arr[i],maxi);      
            }
            else if(i==0){
                maxi=max(arr[i],maxi);
            }
            else if(i==n-1){
                maxi=max(maxi,2*(x-arr[i]));
                maxi=max(arr[i]-arr[i-1],maxi);
            }
            else{
                maxi=max(arr[i]-arr[i-1],maxi);
            }
        }
        cout<<maxi<<'
';
 
    }
 
    return 0;
}