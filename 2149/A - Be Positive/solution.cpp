#include <iostream>
#include<climits>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int to_operate=0;
        int maxi=INT_MIN;
        int negcount=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<0){
                negcount+=1;
                maxi=max(maxi,arr[i]);
            }
            else if(arr[i]==0){
                to_operate+=1;
            }
        }
        if(negcount%2!=0){
            while(maxi<=0){
                maxi+=1;
                to_operate+=1;
            }
        }
        cout<<to_operate<<'
';
    }
    return 0;
}