#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int arr_pos_2[n]={};
        int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2){
                count+=1;
            }
 
        }
        if(count==0){
            cout<<1<<'
';
        }
        else if(count%2==0){
            int mid=count/2;
            count=0;
            for(int i=0;i<n;i++){
                if(arr[i]==2){
                    count+=1;
                    if(count==mid){
                        cout<<i+1<<'
';
                    }
                }
            }
        }
        else{
            cout<<-1<<'
';
        }
    }
 
    return 0;
}