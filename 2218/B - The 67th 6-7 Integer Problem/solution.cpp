#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        vector<long long> arr(7);
        for(int i=0;i<7;i++){
            cin>>arr[i];
        }
        long long sum=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<7;i++){
            if(i==6){
                sum+=arr[i];
            }
            else{
                sum-=arr[i];
            }
        }
        cout<<sum<<'
';
    }
 
    return 0;
}