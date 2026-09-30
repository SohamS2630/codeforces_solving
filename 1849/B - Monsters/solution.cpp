#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>k){
                if(arr[i]%k!=0){
                    arr[i]=arr[i]%k;
                }
                else{
                    arr[i]=k;
                }
            }
            v.push_back({-arr[i],i+1});
        }
        sort(v.begin(),v.end());
 
 
        for(const auto& it:v){
            cout<<it.second<<" ";
        }
        cout<<"
";
    }
 
    return 0;
}