#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        vector<int> six;
        vector<int> two;
        vector<int> three;
        vector<int> other;
        vector<int> ans;
 
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%6==0){
                six.push_back(arr[i]);
            }
            else if(arr[i]%2==0 && arr[i]%3!=0){
                two.push_back(arr[i]);
            }
            else if(arr[i]%3==0 && arr[i]%2!=0){
                three.push_back(arr[i]);
            }
            else{
                other.push_back(arr[i]);
            }
        }
        for(auto &it:six){
            ans.push_back(it);
        }
        for(auto &it:two){
            ans.push_back(it);
        }
        for(auto &it:other){
            ans.push_back(it);
        }
        for(auto &it:three){
            ans.push_back(it);
        }
        for(auto &it:ans){
            cout<<it<<" ";
        }
        cout<<"
";
 
 
    }
 
    return 0;
}