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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int maxi = 1;
        int cnt=1;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]==1){
                cnt++;
                maxi = max(cnt,maxi);
            }
            else if(arr[i+1]-arr[i]==0){
                continue;
            }
            else{
                cnt=1;
            }
        }
        cout<<maxi<<'
';
    }
 
    return 0;
}