#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        set<int> s;
        int sum=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s.insert(arr[i]);
        }
        if(s.size()==1){
            cout<<"NO"<<'
';
        } 
        else{
            sort(arr,arr+n);
            if(arr[0]!=arr[n-1]){
                cout<<"YES"<<'
';
                cout<<arr[n-1]<<" ";
                for(int i=0;i<n-1;i++){
                    cout<<arr[i]<<" ";
                }
            }
            cout<<'
';
        }
    }
 
    return 0;
}