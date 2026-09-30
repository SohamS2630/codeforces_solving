#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int maxi = -1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxi = max(maxi,arr[i]);
        }
        maxi+=1;
        int maxi2 = maxi-arr[0];
        for(int i=0;i<n;i++){
            maxi2 = max(maxi-arr[i],maxi2);
        }
        cout<<maxi2<<'
';
 
    }
 
    return 0;
}