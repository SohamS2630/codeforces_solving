#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
            mini=min(mini,arr[i]);
        }
        int sum=maxi+mini;
        int ans[n];
        for(int i=0;i<n;i++){
            ans[i]=sum-arr[i];
            cout<<ans[i]<<" ";
        }
        cout<<'
';
 
    }
 
 
    return 0;
}