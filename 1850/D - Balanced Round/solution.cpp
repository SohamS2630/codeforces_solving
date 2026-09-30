#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count=1;
        int mini=INT_MAX;
        int i=1;
        while(i<n){
            if(arr[i]-arr[i-1]<=k){
                count++;
                i++;
            }
            else{
                mini=min(n-count,mini);
                count=1;
                i++;
            }
        }
        mini=min(mini,n-count);
        cout<<mini<<'
';
    }
 
    return 0;
}