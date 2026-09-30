#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int arr[n]={0};
    int val=-1;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
 
    }
    if(arr[1]%2==0){
        val=1;
        if(arr[2]%2!=0){
            if(arr[3]%2==0){
                cout<<2;
                return 0;
            }
            else{
                cout<<1;
                return 0;
            }
        }
    }
    else if(arr[1]%2!=0){
        val=0;
        if(arr[2]%2==0){
            if(arr[3]%2!=0){
                cout<<2;
                return 0;
            }
            else{
                cout<<1;
                return 0;
            }
        }
    }
 
    for(int i=3;i<=n;i++){
        if(arr[i]%2!=0 && val==1){
            cout<<i;
            return 0;
        }
        else if(arr[i]%2==0 && val==0){
            cout<<i;
            return 0;
        }
    }
 
    return 0;
}