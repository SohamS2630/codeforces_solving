#include <iostream>
#include <map>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        map<int,int> mp;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            mp[arr[i]]++;
        }
        int cnt=0;
        int maxi=-1;
        for(const auto&it:mp){
            if(it.second>cnt){
                cnt=it.second;
                maxi=it.first;
            }
        }
        int rem = n-cnt;
        int rem_at_end = (cnt-rem-2);
        if(rem_at_end>0){
            cout<<sum-(rem_at_end*maxi)<<'
';
        }
        else{
            cout<<sum<<'
';
        }
        
 
    }
 
    return 0;
}