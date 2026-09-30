#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int cnt=0;
        int cnt_block=0;
        bool in_seg=true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                cnt++;
                in_seg=true;
            }
            else{
                if(in_seg){
                    cnt_block++;
                    in_seg=false;
                }
            }
        }
        if(cnt==n){
            cout<<0<<'
';
        }
        else if(cnt_block==1){
            cout<<1<<'
';
        }
        else{
            cout<<2<<'
';
        }
    }
 
    return 0;
}