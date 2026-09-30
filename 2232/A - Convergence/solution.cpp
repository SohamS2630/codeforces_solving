#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(n%2!=0){
            int m=(n-1)/2;
            int mid = arr[m];
            int l = 0;
            int r = 0;
            for(int i=0;i<m;i++){
                if(arr[i]!=mid){
                    l++;
                }
            }
            for(int i=m+1;i<n;i++){
                if(arr[i]!=mid){
                    r++;
                }
            }
            cout<<max(l,r)<<'
';
 
        }
        else{
            int mid=arr[n/2];
            int l1=0;
            int r1=0;
            for(int i=0;i<n/2;i++){
                if(arr[i]!=mid){
                    l1++;
                }
            }
            for(int i=(n/2)+1;i<n;i++){
                if(arr[i]!=mid){
                    r1++;
                }
            }
            int c1=max(l1,r1);
            mid = arr[(n/2)-1];
            int l2=0;
            int r2=0;
            for(int i=0;i<(n/2)-1;i++){
                if(arr[i]!=mid){
                    l2++;
                }
            }
            for(int i=(n/2);i<n;i++){
                if(arr[i]!=mid){
                    r2++;
                }
            }
            int c2 = max(l2,r2);
            cout<<min(c1,c2)<<'
';
 
        }
 
        
 
    }
 
    return 0;
}