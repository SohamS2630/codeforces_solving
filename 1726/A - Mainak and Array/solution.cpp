#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int ans=INT_MIN;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
            mini=min(mini,arr[i]);
        }
        if(arr[0]==mini && arr[n-1]==maxi){
            ans=max(maxi-mini,ans);
        }
        else{
            for(int i=0;i<n-1;i++){
                ans=max(arr[i]-arr[i+1],ans);
            }
        }
        ans=max(arr[n-1]-mini,ans);
        ans=max(maxi-arr[0],ans);
        cout<<ans<<'
';
 
    }
 
    return 0;
}