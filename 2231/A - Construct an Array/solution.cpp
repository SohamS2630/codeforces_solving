#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        for(int i=1;i<=2*n;i++){
            if(cnt<n && i%2!=0){
                cout<<i<<" ";
                cnt++;
            }
            else if(cnt>=n){
                break;
            }
        }
        cout<<'
';
    }
 
    return 0;
}