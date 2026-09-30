#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int zer=0,one=0,two=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                zer++;
            }
            else if(arr[i]==1){
                one++;
            }
            else if(arr[i]==2){
                two++;
            }
        }
        int op=zer;
        if(one==two){
            op+=one;
        }
        else if(one<two){
            op+=one;
            int rem = (two - one);
            op+=rem/3;
 
        }
        else if(two<one){
            op+=two;
            one = one - two;
            op+=one/3;
        }
        cout<<op<<'
';
    }
 
    return 0;
}