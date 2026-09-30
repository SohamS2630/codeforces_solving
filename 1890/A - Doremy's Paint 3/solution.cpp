#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        int f1=-1,f2=-1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int,int> freq;
        for(int num:arr){
            freq[num]++;
        }
        if(freq.size()>2){
            cout<<"NO"<<'
';
        }
        else if(freq.size()==1){
            cout<<"YES"<<'
';
        }
        else{
            for(const auto& it:freq){
                if(f1==-1){
                    f1=it.second;
                }
                else{
                    f2=it.second;
                }
            }
            if(abs(f1-f2)>1){
                cout<<"NO"<<'
';
            }
            else{
                cout<<"YES"<<'
';
            }
        }
    }
 
    return 0;
}