#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mini=min(mini,arr[i]);
        }
        sort(arr,arr+n);
        int lb=0;
        for(int i=0;i<n;i++){
            if(arr[i]==mini){
                lb+=1;
            }
            else{
                break;
            }
        }
        if(lb==n){
            cout<<-1<<'
';
        }
        else{
            cout<<lb<<" "<<n-lb<<'
';
            for(int i=0;i<lb;i++){
                cout<<arr[i]<<" ";
            }
            cout<<'
';
            for(int i=lb;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<'
';
        }
    }
 
    return 0;
}