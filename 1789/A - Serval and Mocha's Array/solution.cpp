#include <iostream>
#include <numeric>
#include <climits>
 
using namespace std;
 
int findGcd(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b;
        }
        else {
            b = b % a; 
        }
    }
    if(a == 0) {
        return b;
    }
    return a;
}
  
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int res=INT_MAX;
        bool flag=true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1){
                flag=false;
            }
        }
        if(flag==false){
            cout<<"YES"<<'
';
        }
        else if(flag){
            for(int j=0;j<n-1;j++){
                for(int i=j+1;i<n;i++){
                    res=min(res,findGcd(arr[i],arr[j]));
                }
            }
            if(res<=2){
                cout<<"YES"<<'
';
            }
            else{
                cout<<"NO"<<'
';
            }
        }
    }
 
    return 0;
}