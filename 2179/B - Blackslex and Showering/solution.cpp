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
        int sum = 0;
        for(int i =1;i<n;i++){
            sum+=abs(arr[i]-arr[i-1]);
        }
        int mini = min(sum-abs(arr[1]-arr[0]),sum-abs(arr[n-1]-arr[n-2]));
        for(int i=1;i<n-1;i++){
            mini = min(mini,sum-(abs(arr[i]-arr[i-1])+abs(arr[i+1]-arr[i]))+abs(arr[i+1]-arr[i-1]));
        }
        cout<<mini<<'
';
 
    }
 
    return 0;
}