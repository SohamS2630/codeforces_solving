#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
 
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            v.push_back(val);
        }
 
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
 
        for(auto const& it:v){
            cout<<it<<" ";
        }
        cout<<'
';
 
    }
 
    return 0;
}