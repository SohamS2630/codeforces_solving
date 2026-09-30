#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>a>>b>>n;
        int arr[n];
        long long seconds=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            seconds+=min(arr[i],a-1);
        } 
        cout<<seconds+b<<'
';
        
    }
 
    return 0;
}