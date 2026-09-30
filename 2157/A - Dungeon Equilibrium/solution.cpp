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
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int cnt=0;
        for(auto& it:mp){
            if(it.first>it.second){;
                cnt+=it.second;
            }
            else if(it.first<it.second){
                cnt+=it.second-it.first;
            }
        }
        cout<<cnt<<'
';
    }
 
    return 0;
}