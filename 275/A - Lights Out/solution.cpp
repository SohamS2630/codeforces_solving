#include <iostream>
using namespace std;
 
int main() {
    int arr[3][3];
    int ans[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
 
    ans[0][0]=(arr[0][0]+arr[1][0]+arr[0][1]+1)%2;
    ans[0][2]=(arr[0][2]+arr[1][2]+arr[0][1]+1)%2;
    ans[2][2]=(arr[2][2]+arr[2][1]+arr[1][2]+1)%2;
    ans[2][0]=(arr[2][0]+arr[1][0]+arr[2][1]+1)%2;
 
    ans[0][1]=(arr[0][1]+arr[0][0]+arr[0][2]+arr[1][1]+1)%2;
    ans[1][0]=(arr[1][0]+arr[1][1]+arr[0][0]+arr[2][0]+1)%2;
    ans[1][2]=(arr[1][2]+arr[1][1]+arr[0][2]+arr[2][2]+1)%2;
    ans[2][1]=(arr[2][1]+arr[2][0]+arr[2][2]+arr[1][1]+1)%2;
 
    ans[1][1]=(arr[1][1]+arr[0][1]+arr[1][0]+arr[1][2]+arr[2][1]+1)%2;
 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j];
        }
        cout<<'
';
    }
 
    return 0;
}