#include <iostream>
#include <vector>
using namespace std;
 
int solve(vector<int> &arr,int n){
        int cnt=0;
        for(int i=n-2;i>=0;i--){
            if(arr[i+1]==0){
                return -1;
            }
            if(arr[i]>=arr[i+1]){
                while(arr[i]>=arr[i+1]){
                    arr[i]=arr[i]/2;
                    cnt++;
                }
            }
        }  
        return cnt;
}
 
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<int> arr(n);
        int cnt=0;
        bool flag = true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(arr,n)<<'
';
    }
 
    return 0;
}