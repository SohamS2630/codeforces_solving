#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int count=0;
        int op=0;
        int prev=0;//0 or 1 for odd and even respectively
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(i==0){
                if(arr[i]%2==0){
                    prev=1;
                    count+=1;
                }
                else{
                    prev=0;
                    count+=1;
                }
            }
            else{
                if(arr[i]%2==0 && prev==1){
                    count+=1;
                }
                else if(arr[i]%2!=0 && prev==0){
                    count+=1;
                }
                else if(arr[i]%2==0 && prev==0){
                    op+=count-1;
                    count=1;
                    prev=1;
                }
                else if(arr[i]%2!=0 && prev==1){
                    op+=count-1;
                    count=1;
                    prev=0;
                }
            }
        }
        op += count - 1;
        cout<<op<<'
';
 
    }
 
    return 0;
}