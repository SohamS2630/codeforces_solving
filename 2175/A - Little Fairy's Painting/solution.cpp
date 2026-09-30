#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s.insert(arr[i]);
        }
        sort(arr,arr+n);
        int ns = s.size();
        int no = -1;
        for(int i=0;i<n;i++){
            if(arr[i]>=ns){
                no = arr[i];
                break;
            }
        }
        if(no==-1){
            cout<<ns<<'
';
        }
        else{
            cout<<no<<'
';
        }
 
 
 
    }
 
    return 0;
}