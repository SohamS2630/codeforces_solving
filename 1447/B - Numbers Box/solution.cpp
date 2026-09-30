#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        int cnt=0;
        int mini = INT_MAX;
        bool flag = false;
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                sum+=abs(arr[i][j]);
                mini=min(mini,abs(arr[i][j]));
                if(arr[i]==0){
                    flag = true;
                }
                if(arr[i][j]<0){
                    cnt++;
                }
            }
        }
        if(flag || cnt%2==0){
            cout<<sum<<'
';
        }
        else{
            cout<<sum-2*mini<<'
';
        }
    }
 
    return 0;
}