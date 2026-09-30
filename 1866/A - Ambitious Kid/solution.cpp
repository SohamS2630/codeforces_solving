#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    long long arr[n];
    long long mini=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(n==1){
            cout<<abs(arr[i]);
            return 0;
        }
        else if(arr[i]==0){
            cout<<0;
            return 0;
        }
        else{
            mini=min(mini,abs(arr[i]));
        }
    }
    cout<<mini;
 
    return 0;
}