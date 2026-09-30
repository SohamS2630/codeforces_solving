#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        int arr[n];
        int maxi = 0;
        int mini = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<a){
                mini++;
            }
            if(arr[i]>a){
                maxi++;
            }
        }
        if(maxi>mini){
            cout<<a+1<<'
';
        }
        else{
            cout<<a-1<<'
';
        }
    }
 
 
    return 0;
}