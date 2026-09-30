#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        char col[n+1];
        arr[0]=0,col[0]='n';
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            if(i%2!=0){
                col[arr[i]]='r';
            }
            else{
                col[arr[i]]='b';
            }  
        }
        bool ok=true;
        for(int i=1;i<=n;i++){
            if(col[i]==col[i+1]){
                cout<<"NO"<<"
";
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<"
";
        }
        
    }
 
    return 0;
}