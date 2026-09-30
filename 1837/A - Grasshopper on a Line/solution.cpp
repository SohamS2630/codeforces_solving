#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool flag =true;
        if(n%k!=0){
            cout<<1<<'
';
            cout<<n<<'
';
            flag=false;
        }
        while(flag){
            int a=n-1;
            if(a%k!=0 && (n-a)%k!=0){
                cout<<2<<'
';
                cout<<a<<" "<<n-a<<'
';
                flag=false;
            }
            else{
                n=n-1;
            }
        }
    }
 
    return 0;
}