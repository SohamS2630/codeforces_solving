#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int even=0;
        int odd=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even==0 || odd==0){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
        }
        else{
            sort(arr,arr+n);
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
        }
        cout<<'
';
 
    }
 
    return 0;
}