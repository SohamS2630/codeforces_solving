#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int maxi=0;
        int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                count+=1;
                maxi=max(count,maxi);
 
            }
            else{
                count=0;
            }
        }
        cout<<maxi<<'
';
    }
 
    return 0;
}