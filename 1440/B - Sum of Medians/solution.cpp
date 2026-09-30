#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n*k];
        for(int i=0;i<n*k;i++){
            cin>>arr[i];
        }
        int med=(n+1)/2;//median
        int rem=n-(med-1);//remaing(rem th) number to take from back
        long long sum=0;
        int i=(med-1)*k;//eliminate the starting numbers required in array
        while(i<n*k){
            sum+=arr[i];
            i+=rem;
        }
        cout<<sum<<'
';
    }
 
    return 0;
}