#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,h,l;
        cin>>n>>h>>l;
        int arr[n];
        int maxi = max(h,l);
        int mini = min(h,l);
    
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int i = 0;
        int j=0;
        while(j<n){
            if(arr[j]>maxi){
                break;
            }
            else{
                j++;
            }
        }
        j-=1;
        int cnt=0;
        while(j>i){
            if(arr[i]>mini){
                break;
            }
            cnt++;
            i++;
            j--;
        }
        cout<<cnt<<'
';
    }
 
    
    return 0;
}