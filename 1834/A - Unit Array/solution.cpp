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
        int count=0;
        int neg=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==-1){
                neg+=1;
            }
        }
        if(neg>n-neg){
            double rem=(neg-(n-neg));
            int op=ceil(rem/2);
            count+=op;
            neg=neg-op;
        }
        if(neg%2!=0){
            count+=1;
        }
        cout<<count<<'
';
    }
 
    return 0;
}