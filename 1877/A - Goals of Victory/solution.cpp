#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        int sum=0;
        for(int i=0;i<n-1;i++){
            cin>>a;
            sum+=a;
        }
        cout<<-(sum)<<'
';
    }
 
    return 0;
}