#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(abs(arr[i])>=abs(arr[0])){
                cnt++;
            }  
        }
        int mid = ceil(double(n)/2);
        if(cnt>=mid){
            cout<<"YES"<<'
';
        }
        else{
            cout<<"NO"<<'
';
        }
 
        
    }
 
    return 0;
}