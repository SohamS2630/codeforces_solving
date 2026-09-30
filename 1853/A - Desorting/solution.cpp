#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int diff=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            diff=min(diff,arr[i]-arr[i-1]);
        }
        if(is_sorted(arr,arr+n)==false){
            cout<<0<<'
';
        }
        else if(diff==0){
            cout<<1<<'
';
        }
        else{
            cout<<(diff/2)+1<<'
';
        }
    }
 
    return 0;
}