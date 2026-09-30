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
        int maxi = -1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>=maxi){
                maxi = arr[i];
            }
            else{
                cnt++;
            }
        }
        cout<<cnt<<'
';
 
    }
 
    return 0;
}